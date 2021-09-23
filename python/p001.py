# Project Euler
# Problem 1 - Multiples of 3 and 5
# (c) Jordan Sola 2021. All rights reserved. (MIT License)
# Written by Jordan Sola 2021

LIMIT = 1000 - 1

a = [3, 5, -15]
n = [LIMIT // a[0], LIMIT // a[1], int(LIMIT / a[2])]
n_plus = [1, 1, -1]
sum = 0

# - Gauss Summation Formula: sum = a(n(n + 1) / 2).
#   a = factor (3, 5, -15)
#   n = limit (999) / factor (3, 5, -15)
# - We need to remove 15 as it is a factor of numbers that have already
#   been counted as factors of 3 and 5.

def compute(sum):
	for factor in range(0, len(a)):
		sum += a[factor] * (n[factor] * (n[factor] + n_plus[factor]) // 2)
	return sum

if __name__ == "__main__":
	print(compute(sum))

# Runtime (Apple M1): 341ns
# Complexity: O(1)
