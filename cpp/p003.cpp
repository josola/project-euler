/* 
 * Project Euler
 * Problem 3 - Largest prime factor
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include "stdio.h"

int main() {

	long long int num = 600851475143;

	/*
	 * Any prime number that is greater than a composite number cannot be the
	 * largest prime, we elimenate primes greater than a constant by
	 * dividing the num by its composite.
	 */
	

	for (long int i = 2; i < num; i++) {
		if (num % i == 0)
			num /= i;
	}

	printf("%lli\n", num);
	
	return 0;
}

/*
 * Runtime (Apple M1): 26µs (0.026ms)
 * Complexity: O(log n)
 */
