# Project Euler
# Problem 12 - Highly divisible triangular number
# (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
# Written by Jordan Sola 2020-2021

import math

def compute(TARGET):

	term = 1
	triangular = 0

	div_count = 0
	while div_count < TARGET:

		term += 1
		div_count = 0

		# - Triangular numbers and arithmetic progressions can be found
		#   using the same formula.
		# - Triangular number (arithmetic progression): a = n * (n + 1) / 2
		#   Where "a" is the triangular number, and "n" is the last number
		#   in the arithmetic progression (term).
		# - See p001, and p006 for more examples of
		#   the arithmetic progression formula.

		triangular = term * (term + 1) // 2

		# - We can take the same algorithm p003 used to find
		#   the largest prime factor and adapt it to find all the
		#   factors belonging to our triangular number.

		root = int(math.sqrt(triangular))
		for i in range(1, root + 1, 1):
			if triangular % i == 0:
				div_count += 2

	return triangular

if __name__ == "__main__":
	print(compute(500))

# Answer: 76576500

# Asymptotic complexity: O(N)
<<<<<<< HEAD

# M1           (3.2 GHz CPU) ARMv8-A64 (64 bit): 1 loop, best of 5: 1.79 sec per loop
# Ryzen 5 2600 (3.4 GHz CPU) x86-64 (64 bit): 1 loop, best of 5: 2.91 sec per loop
=======
# M1 (3.2 GHz CPU) ARMv8-A64 (64 bit): 1 loop, best of 5: 1.79 sec per loop
>>>>>>> 56635fa5b1369c84a9c2e1c3c2298a77619ea45c
