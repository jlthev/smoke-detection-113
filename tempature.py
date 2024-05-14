#!/usr/bin/python3

# Script prints an RPi's temperature to the command line
# tintc, tintf = temperature (in deg C), temperature (in deg F)
# Written by Joseph Loeffler
# Last update - 5/6/24

#subprocess call, check_output
from subprocess import check_output
from time import sleep

temp_range = []
sleep_duration = 5
n = 0
while True:
    tact = check_output(['cat','/sys/class/thermal/thermal_zone0/temp'])
    tintc = int(tact) / 1000
    tintf = tintc * (9/5) + 32
    temp_range.append(tintc)
    print(f'RPi CPU Temp: {tintc:.2f} deg C = {tintf:.2f} deg F | Range:{min(temp_range):.2f}-{max(temp_range):.2f} over {n*sleep_duration} sec')
    n+=1
    sleep(sleep_duration)
