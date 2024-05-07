# Program is combination of publisher_member_function.py and serialtest.py
# Last edited 4/30/24 by Joseph Loeffler
# Reads serial input from Arduino and publishes it to a ROS node
# ENGR 113 Group 1 Project

import serial
import rclpy
from rclpy.node import Node

from std_msgs.msg import String

# Initialize Serial @ port /ttyACM0, baud=9600
ser = serial.Serial('/dev/ttyACM0', 9600, timeout=1)
ser.reset_input_buffer()

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('publisher')
        self.publisher_ = self.create_publisher(String, 'topic', 10)
        while True:
            if ser.in_waiting > 0:
                msg = String()
                msg.data = ser.readline().decode('utf-8').rstrip()
                self.publisher_.publish(msg)
                # self.get_logger().info('Publishing: "%s"' % msg.data)
                self.get_logger().info(f'Publishing: {msg.data}')


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
