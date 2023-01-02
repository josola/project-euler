import math

def compute(START, LIMIT):
	result = START
	for i in range(2, LIMIT + 1):
		result = abs(result * i) // math.gcd(result, i)
	return result

if __name__ == "__main__":
	print(compute(1, 20))
