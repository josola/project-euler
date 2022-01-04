/* 
 * Project Euler
 * Problem 7 - 10'001st prime
 * (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021
 */

#include "stdio.h"
#include "stdbool.h"

int compute(const int limit) {
	
	int count = 2;
	int prime = 3;
	while (count < limit) {
		
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
	printf("%i\n", compute(10001));
	return 0;
}

// Answer: 104743

// Asymptotic complexity: O(N LogN)
