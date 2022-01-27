# Project Euler
# Problem 14 - Longest Collatz sequence
# (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
# Written by Jordan Sola 2020-2021

def compute(LIMIT):
	
	max_start = 0
	max_length = 0
	
	# - Every number in the bottom half of n has the same
	#   reverse map in 2n, so we can start our sequence
	#   at (limit / 2) + 1 to cut out half the calculations.
	
	for i in range((LIMIT // 2 + 1), LIMIT):
		
		start = i
		length = 0
		
		while start != 1:
			
			if start % 2 == 0:
				start //= 2
			elif start % 2 != 0:
				start = (3 * start) + 1
			
			length += 1
		
		if length > max_length:
			max_length = length
			max_start = i
	
	return max_start

if __name__ == "__main__":
	print(compute(1000000))

# Answer: 837799

# Complexity: O(N)

# M1           (3.2 GHz CPU) ARMv8-A64 (64 bit): 1 loop, best of 5: 5.29 sec per loop
