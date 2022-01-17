/* Project Euler
   Problem 9 - Special Pythagorean triplet
   (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
   Written by Jordan Sola 2020-2021 */

#include <iostream>
#include <cmath>

int compute(const int TARGET) {
	
	int a = 0;
	int b = 0;
	int c = 0;
	
	bool found = 0;
	for (a = 1; a < TARGET; a++) {
		
		for (b = a; b < TARGET; b++) {
			
			c = TARGET - a - b;
			
			int first = pow(a, 2);
			int second = pow(b, 2);
			int third = pow(c, 2);
			
			if (first + second == third) {
				found = true;
				break;
			}
			
		}
		
		if (found)
			break;
		
	}
	
	int product = a * b * c;
	
	return product;
	
}

int main() {
	std::cout << compute(1000) << std::endl;
	return 0;
}

// Answer: 31'875'000

/* Run on (8 X 24.1203 MHz CPU s) ARM64
   --------------------------------------------------------
   Benchmark              Time             CPU   Iterations
   --------------------------------------------------------
   p009_bench/1'00      134 us          134 us           10
   p009_bench_BigO        O(N)            O(N)              */
