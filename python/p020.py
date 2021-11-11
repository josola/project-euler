# Project Euler
# Problem 20 - Factorial digit sum
# (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
# Written by Jordan Sola 2021

import math

def compute(LIMIT):
	return sum(int(x) for x in str(math.factorial(LIMIT)))

if __name__ == "__main__":
	print(compute(100))

# Answer: 648

# Asymptotic complexity: O(N)

# M1           (3.2 GHz CPU) ARMv8-A64 (64 bit): 20000 loops, best of 5: 13.4 usec per loop
# Ryzen 5 2600 (3.4 GHz CPU) x86-64 (64 bit):
