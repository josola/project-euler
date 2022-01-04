# Project Euler
# Problem 10 - Summation of primes
# (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
# Written by Jordan Sola 2020-2021

def compute(LIMIT):
	
	# - Uses Sieve of Eratosthenes to eliminate composite
	#   numbers up to the limit.
	# - The sieve tracks previously marked primes without increasing
	#   the computation time unnecessarily. This allows the sieve to
	#   jump ahead to the square of the current prime and
	#   remove all the factors of the current prime.
	
	prime = [True] * LIMIT
	
	i = 2
	while (i * i) <= LIMIT:
		
		if prime[i] == True:
			j = i * i
			while j <= LIMIT - 1:
				prime[j] = False
				j += i
		
		i += 1
	
	sum = 0
	for i in range(2, LIMIT):
		if prime[i] == True:
			sum += i
	
	return sum

if __name__ == "__main__":
	print(compute(2000000))

# Answer: 142'913'828'922

# Asymptotic complexity: O(N LogN)

# M1           (3.2 GHz CPU) ARMv8-A64 (64 bit): 1 loop, best of 5: 314 msec per loop
# Ryzen 5 2600 (3.4 GHz CPU) x86-64 (64 bit): 1 loop, best of 5: 438 msec per loop
