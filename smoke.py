#!/usr/bin/python3

import RPi.GPIO as GPIO
from time import sleep
from statistics import fmean

GPIO.setmode(GPIO.BCM)
GPIO.setup(2,GPIO.IN) # Left Sensor
GPIO.setup(3,GPIO.IN) # Center Sensor
GPIO.setup(4,GPIO.IN) # Right Sensor
GPIO.setup(20,GPIO.OUT) # Active Buzzer, one up from bottom right pin
GPIO.setup(21,GPIO.IN) # Init Button, bottom right pin

def loop():
	i = 0
	list = results = [[1],[1],[1]] #[Left,Center,Right]
	text = ["Smoke","Clear"]
	
	while True:
		# TODO: Set center_reading to be GPIO.input(3) 
		# Note that a GPIO reading of 1 means there is NO smoke
		readings = [GPIO.input(2), 1, GPIO.input(4)]

		[list[n].append(readings[n]) for n in range(3)]
		[list[n].pop(0) for n in range(3) if len(list[n]) > 15]
		results = [fmean(list[n]) for n in range(3)]

		final_result = True if min(results) < 0.5 else False
		alert = "| ALERT" if min(readings) < 1 else ""
		print(f"Tick: {str(i).ljust(5)} | Current: {text[readings[0]]} on GPIO 2 ; {text[readings[1]]} on GPIO 3 ; {text[readings[2]]} on GPIO 4 | Result: {final_result} {alert}")

		i += 1
		if(final_result):
			GPIO.output(20,GPIO.HIGH)
		sleep(0.1)
		GPIO.output(20,GPIO.LOW)
if __name__ == "__main__":
	print("Waiting for initialization...")
	# Wait until init button is pressed
#	while(not GPIO.input(21)):
#		sleep(1.5) # Save resources
	loop()
	GPIO.cleanup()

	#My name is Joseph Joestar, I am a nerd.

