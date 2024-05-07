## ❖ Smoke Detection iRobot

The Following Program demonstrates a fully autonomous irobot that can traverse a finite space until a gas particulate is detected. 

## ❖ Requirements
1. Software Requirements
   - irobot edu sdk. The link provided has the library. [iRobot® Education Python® SDK](https://github.com/iRobotEducation/irobot-edu-python-sdk?tab=readme-ov-file#iroboteducation-python-sdk)
   - Bluetooth Library (BLE):[bleak](https://bleak.readthedocs.io/en/latest/)
   - pySerial(Serialized Input to irobot & 3B+): `pip install pyserial`

2. Hardware Requirements
   - Raspberry PI Ver. 3B+
   - Arduino Uno R1
   - iRobot

## ❖ 3B+ Integration with iRobot

Follow the tutorial on the [create3](https://edu.irobot.com/learning-library/connect-create-3-to-raspberry-pi) website to connect the PI to the robot.
**
WIP
**

## ❖ ROS2
Introduction to ROS2 Nodes and the pubsub example: [ROS2 Documentation](https://docs.ros.org/en/humble/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Publisher-And-Subscriber.html) 
Create3Examples: [GitHub Repo](https://github.com/iRobotEducation/create3_examples)

## ❖ BLE Connectivity
1. Identify irobot3 MAC address
   - `Bluetooth(address="#irobot BLE MAC address")`
