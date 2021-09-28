# Project Euler
# Problem 2 - Even Fibonacci numbers
# (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
# Written by Jordan Sola 202-2021

import math

def compute():

	PHI = (1 + math.sqrt(5)) / 2
	LIMIT = 4000000 // 3

	# - nth fibonacci ferm formula: nth = [Phi^n – (phi)^n] / Sqrt[5]
	# - Every third term in a fibonacci sequence is even.

	sum = 0
	term = 3
	while sum < LIMIT:
		sum += int((math.pow(PHI, term) - math.pow(1 - PHI, term)) / math.sqrt(5))
		term += 3

	return sum

if __name__ == "__main__":
	print(compute())
