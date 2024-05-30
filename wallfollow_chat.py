#!/usr/bin/env python3

import serial
import time
import math
import threading
from irobot_edu_sdk.backend.bluetooth import Bluetooth
from irobot_edu_sdk.robots import event, hand_over, Color, Robot, Root, Create3
from irobot_edu_sdk.music import Note

# Connect to 9F98 robot
robot = Create3(Bluetooth(address="00:16:A4:4F:26:D4"))
LEFT = 0
FRONT = 3
RIGHT = 6
vel = 10
LEFT_th = 40
RIGHT_th = 90
th = 200
pos_array = []

# Set up Serial port
ser = serial.Serial('/dev/ttyACM0', 9600, timeout=1)
ser.reset_input_buffer()

# Shared variable and lock for current state
current_state = 0
state_lock = threading.Lock()

def update_serial():
    global current_state
    while True:
        if ser.in_waiting > 0:
            line = ser.readline().decode('utf-8').rstrip()
            if line and line[:2] == "Cu":
                with state_lock:
                    current_state = line[15:]

# Start the serial update thread
serial_thread = threading.Thread(target=update_serial, daemon=True)
serial_thread.start()

async def forward(robot):
    await robot.set_lights_on_rgb(0, 255, 0)
    await robot.set_wheel_speeds(vel, vel)

def conv_to_cm(sensor_value):
    if sensor_value == 0:
        return 25
    return math.log(sensor_value / 5296) / (-.348)

async def follow_wall(robot):
    correction = 0
    Kp = -0.039
    set_point = 10
    while True:
        sensors = (await robot.get_ir_proximity()).sensors
        distance = conv_to_cm(sensors[LEFT])
        error = distance - set_point
        correction = Kp * error
        await robot.set_wheel_speeds((1 + correction) * vel, (1 - correction) * vel)
        sensors = (await robot.get_ir_proximity()).sensors
        if sensors[FRONT] > th:
            return True
        if sensors[LEFT] < LEFT_th:
            return False
    return False

async def follow_wall_right(robot):
    correction = 0
    Kp = 0.039
    set_point = 10
    while True:
        sensors = (await robot.get_ir_proximity()).sensors
        distance = conv_to_cm(sensors[RIGHT])
        error = distance - set_point
        correction = Kp * error
        await robot.set_wheel_speeds((1 + correction) * vel, (1 - correction) * vel)
        sensors = (await robot.get_ir_proximity()).sensors
        if sensors[FRONT] > th:
            return True
        if sensors[RIGHT] < LEFT_th:
            return False
    return False

async def localize_start(robot):
    init = await robot.get_position()
    return init

async def get_POS(robot):
    POI = await robot.get_position()
    pos_array.append(POI)

def print_pos():
    for i in range(len(pos_array)):
        print(f"x:{pos_array[i].x} y:{pos_array[i].y}")

async def check_front(robot):
    sensors = (await robot.get_ir_proximity()).sensors
    if sensors[FRONT] > LEFT_th:
        await robot.turn_right(90)

def print_get_POS():
    for i in range(len(pos_array)):
        print(pos_array[i])

@event(robot.when_bumped, [True, False])
async def bumped_left(robot):
    print('Left bumper triggered')
    await robot.set_lights_on_rgb(255, 0, 0)
    await robot.move(-8)
    await robot.set_lights_on_rgb(255, 255, 255)

@event(robot.when_bumped, [False, True])
async def bumped_right(robot):
    print('Right bumper triggered')
    await robot.set_lights_on_rgb(255, 0, 0)
    await robot.move(-8)
    await robot.set_lights_on_rgb(255, 255, 255)

@event(robot.when_play)
async def play(robot):
    start = await localize_start(robot)
    print(start)
    pos_array.append(start)
    print('x y heading=', start)
    await forward(robot)
    while True:
        # Get the current state safely
        with state_lock:
            current_state_local = current_state

        sensors = (await robot.get_ir_proximity()).sensors
        if sensors[LEFT] > LEFT_th:
            front_wall = await follow_wall(robot)
            if front_wall:
                await robot.set_wheel_speeds(0, 0)
                await robot.turn_right(90)
                await get_POS(robot)
                print_pos()
            else:
                await robot.set_wheel_speeds(0, 0)
                await robot.move(33)
                await robot.turn_left(90)
                await get_POS(robot)
                print_pos()
            await robot.set_wheel_speeds(vel, vel)

        if sensors[RIGHT] > RIGHT_th:
            front_wall = await follow_wall_right(robot)
            if front_wall:
                await robot.set_wheel_speeds(0, 0)
                await robot.turn_right(-90)
                await get_POS(robot)
                print_pos()
            else:
                await robot.set_wheel_speeds(0, 0)
                await robot.move(30)
                await robot.turn_left(-90)
                await get_POS(robot)
                print_pos()
            await robot.set_wheel_speeds(vel, vel)

        if sensors[FRONT] > 150:
            await robot.set_wheel_speeds(0, 0)
            await robot.turn_right(90)

        await robot.set_wheel_speeds(vel, vel)
        print(current_state_local)
        # if current_state_local != 0:
            # while True:
                # print("SENSOR HIGH")
                # await robot.set_lights_on_rgb(200, 100, 100)

robot.play()
