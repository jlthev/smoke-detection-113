#!/usr/bin/env python3

from irobot_edu_sdk.backend.bluetooth import Bluetooth
from irobot_edu_sdk.robots import event, hand_over, Color, Robot, Root, Create3
from irobot_edu_sdk.music import Note
import math
import time
import serial

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
current_state = 0

# Set up Serial port
ser = serial.Serial('/dev/ttyACM0', 9600, timeout=1)
ser.reset_input_buffer()

async def forward(robot):
    await robot.set_lights_on_rgb(0, 255, 0)
    await robot.set_wheel_speeds(vel, vel)

def conv_to_cm(sensor_value):
    if sensor_value == 0:
        return 25
    return math.log(sensor_value/5296)/(-.348) #based on best fit curve of measured distance data

async def follow_wall(robot):
    correction = 0
    Kp = -0.039
    set_point = 10
    while True:
        await update_serial(robot)
        print( "following left wall")
        sensors = (await robot.get_ir_proximity()).sensors
        print(sensors[LEFT])
        distance = conv_to_cm(sensors[LEFT])
        print(distance)
        error = distance - set_point
        correction = Kp*error
        await robot.set_wheel_speeds((1+correction)*vel, (1-correction)*vel)
        sensors = (await robot.get_ir_proximity()).sensors
        if sensors[FRONT] > th:
            print("front wall" )
            return True
        if sensors[LEFT] < LEFT_th:
            print("no left wall")
            return False
    return False

async def follow_wall_right(robot):
    correction = 0
    Kp = 0.039 # subject to change
    set_point = 10
    while True:
        await update_serial(robot)
        print( "following right wall")
        sensors = (await robot.get_ir_proximity()).sensors
        print(sensors[RIGHT])
        distance = conv_to_cm(sensors[RIGHT])
        print(distance)
        error = distance - set_point
        correction = Kp*error
        await robot.set_wheel_speeds((1+correction)*vel, (1-correction)*vel)
        sensors = (await robot.get_ir_proximity()).sensors
        if sensors[FRONT] > th:
            print("front wall" )
            return True
        if sensors[RIGHT] < LEFT_th:
            print("no right wall")
            return False
    return False
    

async def localize_start(robot):
    init = await robot.get_position()
    return init

async def get_POS(robot):
    POI = await robot.get_position()
    pos_array.append(POI)

def print_pos():
    for i in range (len(pos_array)):
        print(f"x:{pos_array[i].x} y:{pos_array[i].y}")
    
async def check_front(robot):
    sensors = (await robot.get_ir_proximity()).sensors
    if(sensors[FRONT] > LEFT_th):
        robot.turn_right(90)
    
def print_get_POS():
    for i in range(len(pos_array)):
        print(pos_array[i])


@event(robot.when_bumped, [True, False])
async def bumped(robot):
    print ('Left bumper triggered')
    await robot.set_lights_on_rgb(255, 0, 0)
    await robot.move(-8)
    await robot.set_lights_on_rgb(255, 255, 255)

@event(robot.when_bumped, [False, True])
async def bumped(robot):
    print ('Right bumper triggered')
    await robot.set_lights_on_rgb(255, 0, 0)
    await robot.move(-8)
    await robot.set_lights_on_rgb(255, 255, 255)

async def update_serial(robot):
    if ser.in_waiting > 0:
        line = ser.readline().decode('utf-8').rstrip()
        if(line and line[0] == "C" and line[1] == "u"):
            current_state = int(line[15:])
    print(line)
    # print(f'Current State: {current_state}')
    

@event(robot.when_play)
async def play(robot):
    start = await localize_start(robot)
    print(start)
    pos_array.append(start)
    print('x y heading=', start)
    # time.sleep(5)
    await forward(robot)
    while True:
        # Updating serial data
        await update_serial(robot)
        sensors = (await robot.get_ir_proximity()).sensors
        print(sensors[LEFT])
        if sensors[LEFT] > LEFT_th:
            print("left wall to follow")
            front_wall = await follow_wall(robot)
            if front_wall:
                await robot.set_wheel_speeds(0,0)
                await robot.turn_right(90)
                print("Turning Right")
                # Get Position 
                await get_POS(robot)
                print_pos()
            else: # left is open
                await robot.set_wheel_speeds(0,0)
                await robot.move(33)
                await robot.turn_left(90)
                print("Turning Left")
                await get_POS(robot)
                print_pos()
            await robot.set_wheel_speeds(vel, vel)
        
        if sensors[RIGHT] > RIGHT_th:
            print("right wall to follow")
            front_wall = await follow_wall_right(robot)
            if front_wall:
                await robot.set_wheel_speeds(0,0)
                await robot.turn_right(-90)
                print("Turning Left")
                await get_POS(robot)
                print_pos()
            else: # left is open
                await robot.set_wheel_speeds(0,0)
                await robot.move(30)
                await robot.turn_left(-90)
                print("Turning Left")
                await get_POS(robot)
                print_pos()
            await robot.set_wheel_speeds(vel, vel)
            
        if sensors[FRONT] > 150:
            await robot.set_wheel_speeds(0,0)
            await robot.turn_right(90)
        await robot.set_wheel_speeds(vel,vel)

        if current_state:
            await robot.set_lights_on_rgb(200, 100, 100)
        else:
            await robot.set_lights_on_rgb(255, 255, 255)

        #     for i in pos_array[-1]:
        #         pass
                # await robot.navigate


#test function
# @event(robot.when_play)
# async def play(robot):
#     # await robot.set_wheel_speeds(10,10)
#     while True:
#         sensors = (await robot.get_ir_proximity()).sensors
#         print(conv_to_cm(sensors[LEFT]))


robot.play()