from irobot_edu_sdk.backend.bluetooth import Bluetooth
from irobot_edu_sdk.robots import event, hand_over, Color, Robot, Root, Create3
from irobot_edu_sdk.music import Note
robot = Create3(Bluetooth(address="00:16:A4:4F:26:D4"))

E6 = 1318
E4 = 329
D6 = 1174
D4 = 293
C6 = 1046
C4 = 261
A6 = 1760

@event(robot.when_play)
async def play(robot):
    await robot.set_lights_rgb(128, 174, 255)
    await robot.play_note(Note.C4, 2)
    await robot.play_note(Note.D4, 2)
    await robot.play_note(Note.E4, 2)
    await robot.play_note(Note.F4, 2)
    await robot.play_note(Note.G4, 2)
    await robot.play_note(Note.C4, 0.50)
    await robot.play_note(Note.C4, 0.50)
    await robot.play_note(Note.C4, 0.50)
    await robot.play_note(Note.E4, 0.50)
    await robot.play_note(Note.E4, 0.50)
    await robot.play_note(Note.E4, 0.50)
    await robot.play_note(Note.G4, 0.75)
    await robot.play_note(Note.F4, 0.45)

    






robot.play()



# G – D – E – F – F – F – E – E – E – D – D – E – D – G – E – E – E – E – E – G – D – E – F – F – F – E – E – E – G – G – F – D.

