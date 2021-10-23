# Project Euler
# Problem 4 - Largest palindrome product
# (c) Jordan Sola 2021. All rights reserved. (MIT License)
# Written by Jordan Sola 2021

def compute(LIMIT):

	palindrome = 0

	for i in range(LIMIT, 100, -1):

		j = LIMIT
		while j > 100:

			product = i * j
			if palindrome > product:
				break

			else:
				reverse = 0
				while product != 0:
					reverse = reverse * 10 + product % 10
					product //= 10

				if reverse == (i * j):
					palindrome = (i * j)

			j -= 1

	return palindrome

if __name__ == "__main__":
	print(compute(999))

# Answer: 906609

# Asymptotic complexity: O(N LogN)
# M1 (3.2 GHz CPU) ARMv8-A64 (64 bit): 50 loops, best of 5: 4.26 msec per loop
