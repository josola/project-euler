def compute(LIMIT):
	max_start = 0
	max_length = 0
	for i in range((LIMIT // 2 + 1), LIMIT):
		start = i
		length = 0
		while start != 1:
			if start % 2 == 0:
				start //= 2
			elif start % 2 != 0:
				start = (3 * start) + 1
			length += 1
		if length > max_length:
			max_length = length
			max_start = i
	return max_start

if __name__ == "__main__":
	print(compute(1000000))
