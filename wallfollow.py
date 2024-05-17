from irobot_edu_sdk.backend.bluetooth import Bluetooth
from irobot_edu_sdk.robots import event, hand_over, Color, Robot, Root, Create3
from irobot_edu_sdk.music import Note
import math
import time
robot = Create3(Bluetooth(address='0A9EF9A5-049F-EBD9-3A77-A6B27407E6B3'))
LEFT = 0
FRONT = 3
RIGHT = 6
vel = 13
LEFT_th = 40
th = 200
pos_array = []

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
        print( "following wall")
        sensors = (await robot.get_ir_proximity()).sensors
        print(sensors[LEFT])
        distance = conv_to_cm(sensors[LEFT])
        print(distance)
        error = distance - set_point
        correction = Kp*error
        await robot.set_wheel_speeds((1.5+correction)*vel, (1.5-correction)*vel)
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
        print( "following wall")
        sensors = (await robot.get_ir_proximity()).sensors
        print(sensors[RIGHT])
        distance = conv_to_cm(sensors[RIGHT])
        print(distance)
        error = distance - set_point
        correction = Kp*error
        await robot.set_wheel_speeds((1.5+correction)*vel, (1.5-correction)*vel)
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
    # print(f"{pos_array[0].x}, {pos_array[0].y}")
    
async def check_front(robot):
    sensors = (await robot.get_ir_proximity()).sensors
    if(sensors[FRONT] > LEFT_th):
        robot.turn_right(90)
    
def print_get_POS():
    for i in range(len(pos_array)):
        print(pos_array[i])
    

@event(robot.when_play)
async def play(robot):
    start = await localize_start(robot)
    print(start)
    pos_array.append(start)
    print('x y heading=', start)
    # time.sleep(5)
    await forward(robot)
    while True:
        sensors = (await robot.get_ir_proximity()).sensors
        print(sensors[LEFT])
        if sensors[LEFT] > LEFT_th:
            print("left wall to follow")
            front_wall = await follow_wall(robot)
            if front_wall:
                await robot.set_wheel_speeds(0,0)
                await robot.turn_right(90)
                # await robot.move(15)
                # await forward(robot)
                print("Turning Right")
                await get_POS(robot)
                print_get_POS()
                # POI = await robot.get_position()
                # pos_array.append(POI)
            else: # left is open
                await robot.set_wheel_speeds(0,0)
                await robot.move(33)
                await robot.turn_left(90)
                # await forward(robot)
                print("Turning Left")
                # Robot.arc_left()
                await get_POS(robot)
                print_get_POS()
            await robot.set_wheel_speeds(vel, vel)
        
        if sensors[RIGHT] > LEFT_th:
            print("right wall to follow")
            front_wall = await follow_wall_right(robot)
            if front_wall:
                await robot.set_wheel_speeds(0,0)
                await robot.turn_right(-90)
                # await robot.move(15)
                # await forward(robot)
                print("Turning Right")
                await get_POS(robot)
                print_get_POS()
                # POI = await robot.get_position()
                # pos_array.append(POI)
            else: # left is open
                await robot.set_wheel_speeds(0,0)
                await robot.move(30)
                await robot.turn_left(-90)
                # await forward(robot)
                print("Turning Left")
                # Robot.arc_left()
                await get_POS(robot)
                print_get_POS()
            await robot.set_wheel_speeds(vel, vel)
            
        if sensors[FRONT] > 150:
            await robot.set_wheel_speeds(0,0)
            await robot.turn_right(90)
        await robot.set_wheel_speeds(vel,vel)

#test function
# @event(robot.when_play)
# async def play(robot):
#     # await robot.set_wheel_speeds(10,10)
#     while True:
#         sensors = (await robot.get_ir_proximity()).sensors
#         print(conv_to_cm(sensors[LEFT]))


robot.play()


# from irobot_edu_sdk.backend.bluetooth import Bluetooth
# from irobot_edu_sdk.robots import event, hand_over, Color, Robot, Root, Create3
# from irobot_edu_sdk.music import Note
# import math
# robot = Create3(Bluetooth(address='0A9EF9A5-049F-EBD9-3A77-A6B27407E6B3'))
# LEFT = 0
# FRONT = 3
# vel = 10
# LEFT_th = 25
# th = 200

# def conv_to_cm(sensor_value):
#     if sensor_value == 0:
#         return 25
#     return math.log(sensor_value/5296)/(-.348) #based on best fit curve of measured distance data
# async def follow_wall(robot):
#     correction = 0
#     Kp = -0.03
#     set_point = 10
#     while True:
#         print( "following wall")
#         sensors = (await robot.get_ir_proximity()).sensors
#         print(sensors[LEFT])
#         distance = conv_to_cm(sensors[LEFT])
#         print(distance)
#         error = distance - set_point
#         correction = Kp*error
#         await robot.set_wheel_speeds((1+correction)*vel, (1-correction)*vel)
#         sensors = (await robot.get_ir_proximity()).sensors
#         if sensors[FRONT] > th:
#             print("front wall" )
#             return True
#         if sensors[LEFT] < LEFT_th:
#             print("no left wall")
#             return False
#     return False

# @event(robot.when_play)
# async def play(robot):
#     await robot.set_wheel_speeds(vel, vel)
#     while True:
#         sensors = (await robot.get_ir_proximity()).sensors
#         print(sensors[LEFT])
#         if sensors[LEFT] > LEFT_th:
#             print("left wall to follow")
#             front_wall = await follow_wall(robot)
#             if front_wall:
#                 await robot.turn_right(90)
#             else: # left is open
#                 await robot.move(30)
#                 await robot.turn_left(90)
#             await robot.set_wheel_speeds(vel, vel)
# robot.play()
