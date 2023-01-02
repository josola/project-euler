def compute(LIMIT):
	a = [3, 5, -15]
	n = [(LIMIT - 1) // a[0], (LIMIT - 1) // a[1], int((LIMIT - 1) / a[2])]
	n_plus = [1, 1, -1]
	sum = 0
	for factor in range(0, len(a)):
		sum += a[factor] * (n[factor] * (n[factor] + n_plus[factor]) // 2)
	return sum

if __name__ == "__main__":
	print(compute(1000))
