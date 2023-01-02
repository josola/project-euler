def compute(LIMIT):
	prime = [True] * LIMIT
	i = 2
	while (i * i) <= LIMIT:
		if prime[i] == True:
			j = i * i
			while j <= LIMIT - 1:
				prime[j] = False
				j += i
		i += 1
	sum = 0
	for i in range(2, LIMIT):
		if prime[i] == True:
			sum += i
	return sum

if __name__ == "__main__":
	print(compute(2000000))
