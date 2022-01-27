# Project Euler
# Problem 5 - Smallest multiple
# (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
# Written by Jordan Sola 2021

import math

def compute(START, LIMIT):
	
	# - We are looking for the least common multiple (LCM) of the input set.
	# - We use a formula for the LCM by greatest common factor (GCF).
	# - Formula: LCM(a, b) = |(a × b)| / GCF(a, b)
	#   a = previous LCM in set, starting at the first term in the set
	#   b = next term in set
	
	result = START
	
	for i in range(2, LIMIT + 1):
		result = abs(result * i) // math.gcd(result, i)
	
	return result

if __name__ == "__main__":
	print(compute(1, 20))

# Answer: 232792560

# Complexity: O(N)

# M1           (3.2 GHz CPU) ARMv8-A64 (64 bit): 100000 loops, best of 5: 2.08 usec per loop
