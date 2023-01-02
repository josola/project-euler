def compute(N):
	set = [1] * (N + 1)
	initial_primes = {2, 3, 5, 7, 9, 11, 13}
	for p in initial_primes:
		for i in range(p * p, N + 1, p):
			if set[i] == 1:
				set[i] = 0
	abundant = []
	for a in range(1, N + 1):
		if set[a] == 0: # Don't check prime numbers
			a_sum = 0
			for i in range(1, a):
				if a % i == 0:
					a_sum += i
			if a_sum > a:
				abundant.append(a)
	sum_abundant = [0] * (N + 1)
	for a in range(0, len(abundant)):
		for b in range(a, len(abundant)):
			if abundant[a] + abundant[b] <= N:
				sum_abundant[abundant[a] + abundant[b]] = 1
			else:
				break
	sum = 0
	for i in range(1, N):
		if sum_abundant[i] == 0:
			sum += i
	return sum

if __name__ == '__main__':
	print(compute(28123))
