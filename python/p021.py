def compute(LIMIT):
	amicable_pairs = []
	sum = 0
	for num_a in range(220, LIMIT):
		div_a = 0
		for i in range(1, num_a):
			if num_a % i == 0:
				div_a += i
		div_b = 0
		for i in range(1, div_a):
			if div_a % i == 0:
				div_b += i
		if num_a == div_b and div_a != div_b:
			for i in amicable_pairs:
				if i == div_a:
					break
			else:
				amicable_pairs.append(div_a)
				amicable_pairs.append(div_b)
				sum += div_a + div_b
	return sum

if __name__ == "__main__":
	print(compute(10000))
