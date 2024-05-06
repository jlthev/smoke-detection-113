from irobot_edu_sdk.backend.bluetooth import Bluetooth
from irobot_edu_sdk.robots import event, hand_over, Color, Robot, Root, Create3
from irobot_edu_sdk.music import Note

# Navigation works differently in Create 3 and Root robots, so we need to create an instance of the specific robot class here.
robot = Create3(Bluetooth())

#Baseball Diamond play

@event(robot.when_play)
async def play(robot):

    await robot.set_lights_on_rgb(30, 255, 100)
    await robot.play_note(Note.A5, .5)

    #Orient robot towards the first base, then move 4ft towards it
    await robot.turn_right(45)
    await robot.move(122)

    #await robot.navigate_to(0,122,45)

    #Orient robot towards the second base, move
    await robot.turn_left(90)
    await robot.move(122)

    #Orient robot towards the third base, move
    await robot.turn_left(90)
    await robot.move(122)

    #Orient robot towards the home base, move home
    await robot.turn_left(90)
    await robot.move(122)

robot.play()