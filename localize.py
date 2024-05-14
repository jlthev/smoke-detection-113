#!/usr/bin/env python3

from irobot_edu_sdk.backend.bluetooth import Bluetooth
from irobot_edu_sdk.robots import event, hand_over, Color, Robot, Root, Create3
from irobot_edu_sdk.music import Note
import math

robot = Create3(Bluetooth())
speed = 10
th = 150
pos_array = []


async def forward(robot):
    await robot.set_lights_on_rgb(0, 255, 0)
    await robot.set_wheel_speeds(speed, speed)

async def get_coord(robot):
    pos = await robot.get_position()
    return (pos.x, pos.y)


async def backoff(robot):
    await robot.set_lights_on_rgb(255, 80, 0)
    await robot.move(-20)
    await robot.turn_left(45)


def front_obstacle(sensors):
    print(sensors[3])
    return sensors[3] > th


@event(robot.when_play)
async def play(robot):
    init = await robot.get_position()
    print(init)
    pos_array.append(init)
    print('x y heading=', init)
    await forward(robot)
    while True:
        sensors = (await robot.get_ir_proximity()).sensors
        if front_obstacle(sensors):
            await robot.set_wheel_speeds(0,0)
            print("k")
            end = await robot.get_position()
            print("l")
            print(end)
            pos_array.append(end)
            await robot.turn_right(180)
            break
    print('k')
    print(pos_array[0].x)
    print(pos_array[0].y)
    print(pos_array[1].x)
    print(pos_array[1].y)
    distance = math.sqrt(((end.y)**2))
    print('l')
    print(distance)
    await robot.move(distance)

robot.play()
