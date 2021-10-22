# Project Euler
# Problem 3 - Largest prime factor
# (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
# Written by Jordan Sola 202-2021

def compute(NUM):

	output = NUM

	# - Any prime number that is greater than a composite number cannot be the
	#   largest prime, we elimenate primes greater than a constant by
	#   dividing the num by its composite.

	i = 3
	while i < output:
		if output % i == 0:
			output //= i
		i += 2

	return output

if __name__ == "__main__":
	print(compute(600851475143))

# Answer: 6857

# Asymptotic complexity: O(LogN)
# (24.121 MHz CPU) ARMv8-A64 (64 bit): 2000 loops, best of 5: 192 usec per loop