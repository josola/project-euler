import math

def compute(TARGET):
	term = 1
	triangular = 0
	div_count = 0
	while div_count < TARGET:
		term += 1
		div_count = 0
		triangular = term * (term + 1) // 2
		root = int(math.sqrt(triangular))
		for i in range(1, root + 1, 1):
			if triangular % i == 0:
				div_count += 2
	return triangular

if __name__ == "__main__":
	print(compute(500))
