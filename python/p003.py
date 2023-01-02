def compute(NUM):
	output = NUM
	i = 3
	while i < output:
		if output % i == 0:
			output //= i
		i += 2
	return output

if __name__ == "__main__":
	print(compute(600851475143))
