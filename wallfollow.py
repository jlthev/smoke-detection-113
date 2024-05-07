from irobot_edu_sdk.backend.bluetooth import Bluetooth
from irobot_edu_sdk.robots import event, hand_over, Color, Robot, Root, Create3
from irobot_edu_sdk.music import Note
import math
robot = Create3(Bluetooth(address='0A9EF9A5-049F-EBD9-3A77-A6B27407E6B3'))
LEFT = 0
FRONT = 3
vel = 10
LEFT_th = 25
th = 200

def conv_to_cm(sensor_value):
    if sensor_value == 0:
        return 25
    return math.log(sensor_value/5296)/(-.348) #based on best fit curve of measured distance data
async def follow_wall(robot):
    correction = 0
    Kp = -0.03
    set_point = 10
    while True:
        print( "following wall")
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

@event(robot.when_play)
async def play(robot):
    await robot.set_wheel_speeds(vel, vel)
    while True:
        sensors = (await robot.get_ir_proximity()).sensors
        print(sensors[LEFT])
        if sensors[LEFT] > LEFT_th:
            print("left wall to follow")
            front_wall = await follow_wall(robot)
            if front_wall:
                await robot.turn_right(90)
            else: # left is open
                await robot.move(30)
                await robot.turn_left(90)
            await robot.set_wheel_speeds(vel, vel)
robot.play()