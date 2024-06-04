from irobot_edu_sdk.backend.bluetooth import Bluetooth
from irobot_edu_sdk.robots import event, hand_over, Color, Robot, Root, Create3
from irobot_edu_sdk.music import Note
import math


robot = Create3(Bluetooth(address="00:16:A4:4F:26:D4"))
LEFT = 0
FRONT = 3
vel = 10
th = 150
Map = []
pos_x = []
pos_y = []
check = True
current_state = 0

"""Convert Units"""
def conv_to_cm(sensor_value):

    if sensor_value == 0:
        return 25
    return math.log(sensor_value/5296)/(-.348) #based on best fit curve of 

"""Wall Follow"""
async def follow_wall(robot):
    correction = 0
    Kp = -0.033
    set_point = 10
    while True:
 
        sensors = (await robot.get_ir_proximity()).sensors

        distance = conv_to_cm(sensors[6])

        error = distance - set_point
        correction = Kp*error
        await up_con_pos(robot)

        await robot.set_wheel_speeds((1-correction)*vel, (1+correction)*vel)
        sensors = (await robot.get_ir_proximity()).sensors
        if sensors[3] > th:
            if check == True:
                await robot.set_wheel_speeds(0,0)
                await robot.turn_left(90)
            return True
    return False

""""Get Cont. Pos"""
async def up_con_pos(robot):
    
    a = await robot.get_position()
    pos_x.append(a.x)
    pos_y.append(a.y)
    print(len(pos_x))
    

"""Move While Holding Right Wall"""
async def movement():
    front_wall = await follow_wall(robot)
    print(f"{front_wall}\n")

@event(robot.when_touched, [True,False])
async def touched(robot):
    check = False
    a = pos_x
    b = pos_y
    print(len(pos_x))
    for i in range(len(a)-1, -1, -1):
        await robot.wait(1)
        await robot.navigate_to(a[i], b[i])
        print(await robot.get_position())
        print(a[i])
        print(b[i])

    check = True


"""Main Function"""    

@event(robot.when_play)
async def play(robot):
    await robot.set_wheel_speeds(vel, vel)
    
    while True:
       # sensors = (await robot.get_ir_proximity()).sensors
        await movement()
        # current_state = serialread.update_serial(current_state)
        
robot.play()