from irobot_edu_sdk.backend.bluetooth import Bluetooth
from irobot_edu_sdk.robots import event, hand_over, Color, Robot, Root, Create3
from irobot_edu_sdk.music import Note
import asyncio
robot = Create3(Bluetooth())
speed = 10
th = 250
FRONT = 3
LEFT = 0
RIGHT = 6
pos_array = [ ]

@event(robot.when_touched, [True, False]) # (.) button.
async def touched(robot):
    await robot.set_lights_on_rgb(255, 0, 0)
    await robot.turn_left(90)
    dist_x = pos_array[0][0]

    if pos_array[0][0] < 0:
        dist_x += 10
    else:
        dist_x += 10

    await robot.move(-dist_x)
    await robot.turn_left(-90)
    await robot.set_wheel_speeds(10,10)

    while True: # polling sensors
        sensors = (await robot.get_ir_proximity()).sensors
        if front_obstacle(sensors):
            await robot.set_wheel_speeds(0,0)
            await robot.turn_left(90)
            await robot.move(55)
            await robot.turn_right(90)
            await robot.move(50)
            break

async def get_coord(robot):
    pos = await robot.get_position()
    return (pos.x, pos.y)

async def forward(robot):
    await robot.set_lights_on_rgb(0, 255, 0)
    await robot.set_wheel_speeds(speed, speed)
    
def front_obstacle(sensors):
    print(sensors[3])
    return sensors[3] > th

def right_obstacle(sensors):
    print(sensors[5])
    return sensors[5] > th

def left_obstacle(sensors):
    print(sensors[0])
    return sensors[0] > 10

@event(robot.when_play)
async def play(robot):
    n_s = 0
    i = 1
    await forward(robot)
    while (i < 3):
        sensors = (await robot.get_ir_proximity()).sensors
        if n_s == 0:
            if front_obstacle(sensors):
                await robot.set_wheel_speeds(0,0)
                await robot.turn_left(90)
                await robot.set_wheel_speeds(10,10)
                n_s = 1
        elif n_s == 1:
            if sensors[FRONT] > 200:
                print("front wall" )
                await robot.set_wheel_speeds(0,0)
                await robot.turn_left(-90)
                n_s = 2 # sense
            elif 20 > sensors[RIGHT] >= 0:
                print("no wall")
                await robot.move(35) # get to middle v left Th
                pos = await get_coord(robot)
                print(pos)
                pos_array.append(pos)
                await robot.turn_right(90)
                n_s = 4

        elif n_s == 2:
            if sensors[FRONT] < 200:
                print("no wall")
                pos = await get_coord(robot)
                print(pos)
                pos_array.append(pos)
                n_s = 4
            else:
                await robot.turn_left(-90)
                await robot.set_wheel_speeds(10,10)
                n_s = 3
        elif n_s == 3:
            print(f"LEFT: {sensors[LEFT]}")
            if 20 > sensors[LEFT] >= 0:
                print("no wall")
                await robot.move(35) # get to middle v left Th
                pos = await get_coord(robot)
                print(pos)
                pos_array.append(pos)
                await robot.turn_left(90)
                n_s = 4
        elif n_s == 4:
            await robot.set_wheel_speeds(10,10)
            if front_obstacle(sensors):
                print("Stopping...")
                await robot.set_wheel_speeds(0,0)
                n_s = 0 # doesn't exist
                i = i + 1

        

robot.play()
# await get_coord(robot)
# asyncio.run(get_coord(robot))


#
# Licensed under 3-Clause BSD license available in the License file. Copyright (c) 2021-2022 iRobot Corporation. All rights reserved.
#