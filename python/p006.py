import math

def compute(LIMIT):
	difference = int((math.pow(LIMIT * (LIMIT + 1) // 2, 2)) - (LIMIT * (LIMIT + 1) * ((2 * LIMIT) + 1) // 6))
	return difference

if __name__ == "__main__":
	print(compute(100))
