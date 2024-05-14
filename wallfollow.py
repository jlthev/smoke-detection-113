#
# Licensed under 3-Clause BSD license available in the License file. Copyright (c) 2021-2022 iRobot Corporation. All rights reserved.
#

# Very basic example for avoiding front obstacles.

from irobot_edu_sdk.backend.bluetooth import Bluetooth
from irobot_edu_sdk.robots import event, hand_over, Color, Robot, Root, Create3
from irobot_edu_sdk.music import Note

robot = Create3(Bluetooth())
speed = 20
th = 150
RIGHT = 6
LEFT = 1
FRONT = 3
pos_array = []


async def forward(robot):
    await robot.set_lights_on_rgb(0, 255, 0)
    await robot.set_wheel_speeds(speed, speed)


async def backoff(robot):
    await robot.set_lights_on_rgb(255, 80, 0)
    await robot.move(-20)
    await robot.turn_left(45)


def front_obstacle(sensors):
    print(sensors[3])
    return sensors[3] > th

def right_obstacle(sensors):
    print(sensors[5])
    return sensors[5] > th

def left_obstacle(sensors):
    print(sensors[1])
    return sensors[1] > th


@event(robot.when_play)
async def play(robot):
    # init = await robot.get_position()
    # print(init)
    # pos_array.append(init)
    # print('x y heading=', init)
    # pos_array.append(init)
    # # await forward(robot)
    while True:
        sensors = (await robot.get_ir_proximity()).sensors

        if sensors[LEFT] > th:
            await robot.turn_left(90)
            await robot.set_wheel_speeds(10,10)
        elif sensors[FRONT] < th:
            await robot.set_wheel_speeds(10,10)
        else:
            await robot.turn_right(90)
            await robot.set_wheel_speeds(10,10)

        

       



robot.play()
