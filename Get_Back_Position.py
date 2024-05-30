import numpy
import math


pos_array = [[0,0], [1, 2], [4, 3], [5, 7], [8, 9]]

while len(pos_array) > 1:
	y2 = ((pos_array[::-1])[0])[1]
	y1 = ((pos_array[::-1])[1])[1]
	x2 = ((pos_array[::-1])[0])[0]
	x1 = ((pos_array[::-1])[1])[0]
	distance = math.sqrt(((y2 - y1) ** 2) + ((x2 - x1) ** 2))
	print (distance)
	pos_array.pop()
	print (pos_array)

# while True:
    # pos = await robot.get_position()
    # x_val, y_val = pos.x, pos.y
    # pos_array.append((x_val, y_val))
