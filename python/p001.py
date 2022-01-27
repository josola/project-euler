# Project Euler
# Problem 1 - Multiples of 3 and 5
# (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
# Written by Jordan Sola 2021

def compute(LIMIT):
	
	a = [3, 5, -15]
	n = [(LIMIT - 1) // a[0], (LIMIT - 1) // a[1], int((LIMIT - 1) / a[2])]
	n_plus = [1, 1, -1]
	
	# - Gauss Summation Formula: sum = a(n(n + 1) / 2).
	#   a = factor (3, 5, -15)
	#   n = limit (999) / factor (3, 5, -15)
	# - We need to remove 15 as it is a factor of numbers that have already
	#   been counted as factors of 3 and 5.
	
	sum = 0
	for factor in range(0, len(a)):
		sum += a[factor] * (n[factor] * (n[factor] + n_plus[factor]) // 2)
	
	return sum

if __name__ == "__main__":
	print(compute(1000))

# Answer: 233168

# Complexity: O(1)

# M1           (3.2 GHz CPU) ARMv8-A64 (64 bit): 500000 loops, best of 5: 764 nsec per loop
