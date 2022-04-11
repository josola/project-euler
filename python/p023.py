# Project Euler
# Problem 23 - Non-abundant sums
# (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
# Written by Jordan Sola 2021-2022

def compute(N):
	
	# Get prime numbers up to N
	
	set = [1] * (N + 1)
	
	# All non-primes are made up of initial primes
	initial_primes = {2, 3, 5, 7, 9, 11, 13}
	
	for p in initial_primes:
		for i in range(p * p, N + 1, p):
			if set[i] == 1:
				set[i] = 0
	
	# Produce abundant numbers up to N
	abundant = []
	
	for a in range(1, N + 1):
		if set[a] == 0: # Don't check prime numbers
			a_sum = 0
			for i in range(1, a):
				if a % i == 0:
					a_sum += i
			if a_sum > a:
				abundant.append(a)
	
	# Determine whether numbers up to n are the sum of two abundant numbers
	sum_abundant = [0] * (N + 1)
	
	for a in range(0, len(abundant)):
		for b in range(a, len(abundant)):
			if abundant[a] + abundant[b] <= N:
				sum_abundant[abundant[a] + abundant[b]] = 1
			else:
				break
	
	# Sum up numbers that are not a sum of two abundant numbers
	sum = 0
	for i in range(1, N):
		if sum_abundant[i] == 0:
			sum += i
	
	return sum

if __name__ == '__main__':
	print(compute(28123))

# Answer: 4179871

# Complexity: ?

# M1           (3.2 GHz CPU) ARMv8-A64 (64 bit): 10 loops, best of 3: 10.6 sec per loop
