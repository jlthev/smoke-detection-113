#!/usr/bin/python3
import RPi.GPIO as GPIO
GPIO.setmode(GPIO.BCM)

GPIO.setup(20,GPIO.OUT) # Active Buzzer, one up from bottom right pin
print("Buzzer shutting down...")
while True:
    GPIO.output(20,GPIO.LOW) # Active Buzzer, one up from bottom right pin
