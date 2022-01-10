/* Project Euler
 * Problem 10 - Summation of primes
 * (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021 */

#include "stdbool.h"
#include "stdio.h"

long long int compute(const int LIMIT) {
	
	/* - Uses Sieve of Eratosthenes to eliminate composite
	     numbers up to the limit.
	   - The sieve tracks previously marked primes without increasing
	     the computation time unnecessarily. This allows the sieve to
	     jump ahead to the square of the current prime and
	     remove all the factors of the current prime. */
	
	bool prime[LIMIT];
	for (int i = 0; i < LIMIT; i++)
		prime[i] = true;
	
	for (long int i = 2; i * i <= LIMIT; i++) {
		
		if (prime[i] == true) {
			for (long long int j = i * i; j <= LIMIT; j += i)
				prime[j] = false;
		}
		
	}
	
	long long int sum = 0;
	for (int i = 2; i <= LIMIT; i++) {
		if (prime[i] == true)
			sum += i;
	}
	
	return sum;
	
}

int main() {
	printf("%lli\n", compute(2000000));
	return 0;
}

/* Answer: 142,913,828,922
   Asymptotic complexity: O(N LogN) */
