# Project Euler
# Problem 16 - Power digit sum
# (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
# Written by Jordan Sola 2021

import math

def compute(BASE, EXPONENT):
	
	# - To get individual digits in any length number,
	#   the number must be converted to an ASCII string.
	
	product = str(int(math.pow(BASE, EXPONENT)))
	
	sum = 0
	for i in map(int, product):
		sum += i
	
	return sum

if __name__ == "__main__":
	print(compute(2, 1000))

# Answer: 1366

# Asymptotic complexity: O(N)

# M1           (3.2 GHz CPU) ARMv8-A64 (64 bit): 10000 loops, best of 5: 24.2 usec per loop
# Ryzen 5 2600 (3.4 GHz CPU) x86-64 (64 bit): 10000 loops, best of 5: 35.1 usec per loop
