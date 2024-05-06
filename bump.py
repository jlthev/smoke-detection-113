#
# Licensed under 3-Clause BSD license available in the License file. Copyright (c) 2021-2022 iRobot Corporation. All rights reserved.
#
from irobot_edu_sdk.backend.bluetooth import Bluetooth
from irobot_edu_sdk.robots import event, hand_over, Color, Robot, Root, Create3
from irobot_edu_sdk.music import Note

# Navigation works differently in Create 3 and Root robots, so we need to create an instance of the specific robot class here.
robot = Create3(Bluetooth())

# On event rotate -180 and go to initial position
@event(robot.when_bumped, [True, False])
async def bumped(robot):
    print ('Left bumper triggered')
    await robot.set_lights_on_rgb(255, 0, 0)
    await robot.navigate_to(0,0)

# On event rotate 180 and go to initial position
@event(robot.when_bumped, [False, True])
async def bumped(robot):
    print ('Right bumper triggered')
    await robot.set_lights_on_rgb(0, 255, 0)
    await robot.navigate_to(0, 0)


@event(robot.when_play)
async def play(robot):

    distance = 1000 # set distance to travel

    await robot.navigate_to(0, distance) # start at 0 and go to set distance

robot.play()