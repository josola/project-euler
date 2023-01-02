def compute(LIMIT):
	count = 2
	prime = 3
	while count < LIMIT:
		prime += 2
		is_prime = True
		if prime % 3 == 0:
			continue
		else:
			i = 5
			while i * i <= prime:
				if prime % i == 0 or prime % (i + 2) == 0:
					is_prime = False
				i += 6
		if is_prime:
			count += 1
	return prime

if __name__ == "__main__":
	print(compute(10001))
