/* Project Euler
   Problem 4 - Largest palindrome product
   (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
   Written by Jordan Sola 2020-2021 */

#include <iostream>

int compute(const int LIMIT) {
	
	int palindrome = 0;
	
	for (int i = LIMIT; i > 100; i--) {
		for (int j = LIMIT; j > 100; j--) {
			
			if (palindrome > (i * j))
				break;
			
			else {
				
				int product = i * j;
				int reverse = 0;
				
				while (product != 0) {
					reverse = reverse * 10 + product % 10;
					product /= 10;
				}
				
				if (reverse == (i * j))
					palindrome = i * j;
				
			}
		
		}
	}
	
	return palindrome;
	
}

int main() {
	std::cout << compute(999) << std::endl;
	return 0;
}

// Answer: 906609

/* Run on (8 X 24.1214 MHz CPU s) ARM64
   -----------------------------------------------------------
   Benchmark                 Time             CPU   Iterations
   -----------------------------------------------------------
   p004_bench/99          37.3 us         37.3 us        18745
   p004_bench_BigO      O(N LogN)       O(N LogN)              */
