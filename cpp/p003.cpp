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
	
	for (long int i = 3; i < num; i += 2) {
		if (num % i == 0)
			num /= i;
	}
	
	printf("%lli\n", num);
	
	return 0;
}

/*
 * Runtime (Apple M1): 13'250ns (13.25µs) (0.01ms)
 * Complexity: O(log n)
 */
