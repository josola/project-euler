# Project Euler
# Problem 7 - 10001st prime
# (c) Jordan Sola 2021. All rights reserved. (MIT License)
# Written by Jordan Sola 2021

def compute():

	LIMIT = 10001

	count = 2
	prime = 3

	while count < LIMIT:

		# Skip even numbers, they cannot be prime
		prime += 2
		is_prime = True

		if prime % 3 == 0:
			continue

		else:
			# Optimized primality test for numbers above 25
			i = 5
			while i * i <= prime:

				if prime % i == 0 or prime % (i + 2) == 0:
					is_prime = False

				i += 6

		if is_prime:
			count += 1

	return prime

if __name__ == "__main__":
	print(compute())