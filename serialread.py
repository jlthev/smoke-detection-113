#!/usr/bin/env python3
import serial
import time 
ser = serial.Serial('/dev/ttyACM0', 9600, timeout=1)
ser.reset_input_buffer()

current_state = 0
def update_serial(c):
    # while True:
    if ser.in_waiting > 0:
        line = ser.readline().decode('utf-8').rstrip()
        if(line and line[0] == "C" and line[1] == "u"):
            c = line[15:]
        # print(line)
    return c

# while True:
#     current_state = update_serial(current_state)
#     print(f'Current State: {current_state}')
#     time.sleep(0.2)
# if __name__ == '__main__':