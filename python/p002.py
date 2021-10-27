# Project Euler
# Problem 2 - Even Fibonacci numbers
# (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
# Written by Jordan Sola 202-2021

import math

def compute(LIMIT):

	PHI = (1 + math.sqrt(5)) / 2

	# - nth fibonacci term formula: nth = [Phi^n – (phi)^n] / Sqrt[5]
	# - Every third term in a fibonacci sequence is even.

	sum = 0
	term = 3
	while sum < (LIMIT / 3):
		sum += int((math.pow(PHI, term) - math.pow(1 - PHI, term)) / math.sqrt(5))
		term += 3

	return sum

if __name__ == "__main__":
	print(compute(4000000))

# Answer: 4613732

# Asymptotic complexity: O(LogN)
<<<<<<< HEAD

# M1           (3.2 GHz CPU) ARMv8-A64 (64 bit): 100000 loops, best of 5: 3.75 usec per loop
# Ryzen 5 2600 (3.4 GHz CPU) x86-64 (64 bit): 50000 loops, best of 5: 8.88 usec per loop
=======
# M1 (3.2 GHz CPU) ARMv8-A64 (64 bit): 100000 loops, best of 5: 3.75 usec per loop
>>>>>>> 56635fa5b1369c84a9c2e1c3c2298a77619ea45c
