import math

def compute(LIMIT):
	return sum(int(x) for x in str(math.factorial(LIMIT)))

if __name__ == "__main__":
	print(compute(100))
