## ❖ Smoke Detection iRobot

The Following Program demonstrates a fully autonomous iRobot that can traverse a finite space until a gas particulate is detected. 

## ❖ Requirements
1. Software Requirements
   - iRobot edu sdk. The link provided has the library. [iRobot® Education Python® SDK](https://github.com/iRobotEducation/irobot-edu-python-sdk?tab=readme-ov-file#iroboteducation-python-sdk)
   - Bluetooth Library (BLE): [bleak](https://bleak.readthedocs.io/en/latest/)
   - pySerial(Serialized Input to iRobot & RPi 3B+): `pip install pyserial`

2. Hardware Requirements
   - [Raspberry PI Ver. 3B+](https://www.raspberrypi.com/products/raspberry-pi-3-model-b-plus/) or equil
   - [Arduino Uno R1](https://store-usa.arduino.cc/products/arduino-uno-rev3) or equil
   - [iRobot Create3](https://edu.irobot.com/shop/coding-robots/create?variant=269697) or equil

## ❖ 3B+ Integration with irobot

Follow the tutorial on the [create3](https://edu.irobot.com/learning-library/connect-create-3-to-raspberry-pi) website to connect the PI to the robot.
**
WIP
**

## ❖ BLE Connectivity
1. Identify iRobot MAC address
   - `Bluetooth(address="#irobot BLE MAC address")`
  
## ❖ 3D Modeling Gas Sensor Mounting
1. Onshape Software
   - Base platform for gas sensor (35mm x 24mm x 1mm).
   - Vertical beam perpendicular to the platform on the left edge (1mm x 24mm) extruded upward (9.532mm).
   - Horizontal beam perpendicular to vertical beam, and parallel with platform, on top of the vertical beam (2mm x 24mm x 1mm).
   - On the bottom of the base platform circle centered at (17.5mm x 12mm) with radius 1.375mm, extruded downward 20mm.

## ❖  Development Stages
All files besides `main.py ` show development files before the final script. Read below to learn more about each file

1. bases.py
   - Commands iRobot to navigate to set points in a finite plane. Use this script to familiarize yourself with multithreaded python.  
