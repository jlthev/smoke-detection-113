E4 = 329
F4 = 369
G4 = 391
B5 = 987
A5 = 880
C5 = 523
D5 = 587
E5 = 659
F5 = 698
G5 =  783


from irobot_edu_sdk.backend.bluetooth import Bluetooth
from irobot_edu_sdk.robots import event, hand_over, Color, Robot, Root, Create3
from irobot_edu_sdk.music import Note
robot = Create3(Bluetooth())


@event(robot.when_play)
async def play(robot):
    await robot.set_lights_rgb(128, 174, 255)
    # await robot.play_note(Note.C5, 1)
    # await robot.play_note(Note.D5, 1)
    # await robot.play_note(Note.E5, 1)
    # await robot.play_note(Note.F5, 1)
    # await robot.play_note(Note.G5, 1)
    await robot.play_note(Note.C5, 0.25)
    await robot.play_note(Note.C5, 0.25)
    await robot.play_note(Note.C5, 0.25)
    await robot.play_note(Note.E5, 0.25)
    await robot.play_note(Note.E5, 0.25)
    await robot.play_note(Note.E5, 0.25)
    await robot.play_note(Note.G5, 0.35)
    await robot.play_note(Note.F5, 0.2)
    await robot.play_note(Note.E5, 0.25)
    await robot.play_note(Note.D5, 0.25)
    await robot.play_note(Note.C5, 0.25)
    

robot.play()
