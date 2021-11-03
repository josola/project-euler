# Project Euler
# Problem 20 - Factorial digit sum
# (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
# Written by Jordan Sola 2021

import math

def compute(LIMIT):
	
	factorial = math.factorial(LIMIT)
	
	sum = 0
	while factorial != 0:
		sum += factorial % 10
		factorial //= 10
	
	return sum

if __name__ == "__main__":
	print(compute(100))

# Answer: 648

# Asymptotic complexity: O(n)

# M1           (3.2 GHz CPU) ARMv8-A64 (64 bit): 10000 loops, best of 5: 20.3 usec per loop
