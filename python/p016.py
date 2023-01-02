import math

def compute(BASE, EXPONENT):
	product = str(int(math.pow(BASE, EXPONENT)))
	sum = 0
	for i in map(int, product):
		sum += i
	return sum

if __name__ == "__main__":
	print(compute(2, 1000))
