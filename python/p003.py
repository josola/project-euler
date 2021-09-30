# Project Euler
# Problem 3 - Largest prime factor
# (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
# Written by Jordan Sola 202-2021

def compute():

	num = 600851475143

	# Any prime number that is greater than a composite number cannot be the
	# largest prime, we elimenate primes greater than a constant by
	# dividing the num by its composite.

	i = 3
	while i < num:

		if num % i == 0:
			num //= i

		i += 2

	return num

if __name__ == "__main__":
	print(compute())
