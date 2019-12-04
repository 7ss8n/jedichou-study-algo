# -*- coding: utf-8 -*-
# Fill a 1-D array with random values, the print
# them, one per line.
# File: testArray1.py

from array import Array 
from random import random

def main():
	# The constructor is called to create the array.
	valueList = Array(100)
	
	# Fill the array with random floating-point values.
	for i in range(len(valueList)):
		valueList[i] = random()

	# Print the values, one per line.
	for value in valueList:
		print value

if __name__ == "__main__":
	main()