# Project Euler
# Problem 4 - Largest palindrome product
# (c) Jordan Sola 2021. All rights reserved. (MIT License)
# Written by Jordan Sola 2021

def compute(LIMIT):

	palindrome = 0

	# The largest palindrome between two three digit numbers is six digits
	# long. Six digit numbers have a factor of eleven. We can start our inner
	# loop at 990, the highest three digit number with a factor of eleven.

	for i in range(LIMIT, 100, -1):

		j = 990
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

			j -= 11

	return palindrome

if __name__ == "__main__":
	print(compute(999))
