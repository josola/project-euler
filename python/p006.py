# Project Euler
# Problem 6 - Sum square difference
# (c) Jordan Sola 2021. All rights reserved. (MIT License)
# Written by Jordan Sola 2021

import math

def compute(LIMIT):

	# - We find this by using Gauss's series formula.
	# - Square Sum Formula: m = ((n)(n + 1) / 2)^2
	# - Sum Square Formula: m = (n)(n + 1)(2n + 1) / 6

	difference = int((math.pow(LIMIT * (LIMIT + 1) // 2, 2)) - (LIMIT * (LIMIT + 1) * ((2 * LIMIT) + 1) // 6))

	return difference

if __name__ == "__main__":
	print(compute(100))
