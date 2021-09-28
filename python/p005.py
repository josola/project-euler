# Project Euler
# Problem 5 - Smallest multiple
# (c) Jordan Sola 2021. All rights reserved. (MIT License)
# Written by Jordan Sola 2021

import math

def compute():

	LIMIT = 20

	# - We're looking for the least common multiple (LCM) of the input set.
	# - We use a formula for the LCM by greatest common factor (GCF).
	# - Formula: LCM(a,b) = |(a×b)|/GCF(a,b)
	#   a = previous LCM in set, starting at the first term in the set
	#   b = term in set

	result = LIMIT - (LIMIT - 1)

	for i in range(2, LIMIT + 1):
		result = abs(result * i) // math.gcd(result, i)

	return result

if __name__ == "__main__":
	print(compute())