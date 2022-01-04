# Project Euler
# Problem 9 - Special Pythagorean triplet
# (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
# Written by Jordan Sola 2020-2021

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

# Answer: 31875000

# Asymptotic complexity: O(N)

# M1           (3.2 GHz CPU) ARMv8-A64 (64 bit): 5 loops, best of 5: 49.7 msec per loop
# Ryzen 5 2600 (3.4 GHz CPU) x86-64 (64 bit): 2 loops, best of 5: 114 msec per loop
