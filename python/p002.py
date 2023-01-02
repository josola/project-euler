import math

def compute(LIMIT):
	PHI = (1 + math.sqrt(5)) / 2
	sum = 0
	term = 3
	while sum < (LIMIT / 3):
		sum += int((math.pow(PHI, term) - math.pow(1 - PHI, term)) / math.sqrt(5))
		term += 3
	return sum

if __name__ == "__main__":
	print(compute(4000000))
