# Project Euler
# Problem 6 - Sum square difference
# (c) Jordan Sola 2021. All rights reserved. (MIT License)
# Written by Jordan Sola 2021

import math

def compute(LIMIT):

	# - We find this by using Gauss's Series formula.
	# - Square Sum Formula: m = ((n)(n + 1) / 2)^2
	# - Sum Square Formula: m = (n)(n + 1)(2n + 1) / 6

	difference = int((math.pow(LIMIT * (LIMIT + 1) // 2, 2)) - (LIMIT * (LIMIT + 1) * ((2 * LIMIT) + 1) // 6))

	return difference

if __name__ == "__main__":
	print(compute(100))

# Answer: 25164150

# Asymptotic complexity: O(1)
# M1 (3.2 GHz CPU) ARMv8-A64 (64 bit): 1000000 loops, best of 5: 294 nsec per loop
