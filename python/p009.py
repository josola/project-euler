import math

def compute(TARGET):
	a = 0
	b = 0
	c = 0
	found = False
	for a in range(1, TARGET):
		for b in range(a, TARGET):
			c = TARGET - a - b
			first = math.pow(a, 2)
			second = math.pow(b, 2)
			third = math.pow(c, 2)
			if first + second == third:
				found = True
				break
		if found:
			break
	product = a * b * c
	return product

if __name__ == "__main__":
	print(compute(1000))
