/* 
 * Project Euler
 * Problem 3 - Largest prime factor
 * (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sol 2021
 */

#include "stdio.h"

long long int compute(const long long int num) {
	
	long long int output = num;
	
	/*
		- Any prime number that is greater than a composite number cannot be the
		  largest prime, we elimenate primes greater than a constant by
		  dividing the num by its composite.
	*/
	
	for (long long int i = 3; i < output; i += 2) {
		if (output % i == 0)
			output /= i;
	}
	
	return output;
	
}

int main() {
	printf("%lli\n", compute(600851475143));
	return 0;
}

// Answer: 6857

// Asymptotic complexity: O(LogN)
