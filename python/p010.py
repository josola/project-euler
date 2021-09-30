# Project Euler
# Problem 10 - Summation of Primes
# (c) Jordan Sola 2021. All rights reserved. (MIT License)
# Written by Jordan Sola 2021

import itertools

def compute():

	LIMIT = 2000000

	# - Uses Sieve of Eratosthenes to eliminate composite numbers
	#   up to the limit.
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
	print(compute())