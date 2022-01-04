/*
 * Project Euler
 * Problem 14 - Longest Collatz sequence
 * (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021
 */

#include "stdio.h"

int compute(const int limit) {
	
	int max_start = 0;
	int max_length = 0;
	
	/*
		- Every number in the bottom half of n has the same
		  reverse map in 2n, so we can start our sequence
		  at (limit / 2) + 1 to cut out half the calculations.
	*/
	
	for (int i = (limit / 2) + 1; i < limit; i++) {
		
		long long int start = i;
		int length = 0;
		
		while (start != 1) {
			
			if (start % 2 == 0)
				start /= 2;
			else if (start % 2 != 0)
				start = (3 * start) + 1;
			
			length++;
			
		}
		
		if (length > max_length) {
			max_length = length;
			max_start = i;
		}
		
	}
	
	return max_start;
	
}

int main() {
	printf("%i\n", compute(1000000));
	return 0;
}

// Answer: 837799

// Asymptotic complexity: O(N)
