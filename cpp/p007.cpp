/* Project Euler
   Problem 7 - 10'001st prime
   (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
   Written by Jordan Sola 2020-2021 */

#include <iostream>

int compute(const int LIMIT) {
	
	int count = 2;
	int prime = 3;
	
	while (count < LIMIT) {
		
		// Skip even numbers, they cannot be prime
		prime += 2;
		bool is_prime = true;
		
		if (prime % 3 == 0)
			continue;
		
		else {
			// Optimized primality test for numbers above 25
			for (int i = 5; i * i <= prime; i += 6) {
				
				if (prime % i == 0 || prime % (i + 2) == 0)
					is_prime = false;
				
				continue;
				
			}
		}
		
		if (is_prime)
			count++;
		
	}
	
	return prime;
	
}

int main() {
	std::cout << compute(10001) << std::endl;
	return 0;
}

// Answer: 104'743

/* Run on (8 X 24.1216 MHz CPU s) ARM64
   -----------------------------------------------------------
   Benchmark                 Time             CPU   Iterations
   -----------------------------------------------------------
   p007_bench/10'001      2.30 ms         2.30 ms          295
   p007_bench_BigO      O(N logN)       O(N logN)              */
