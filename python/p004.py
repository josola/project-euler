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
