/* 
 * Project Euler
 * Problem 10 - Summation of primes
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <vector>

#include "stdio.h"

int main() {
	
	const int limit = 2'000'000;
	
	/*
	 * - Uses Sieve of Eratosthenes to eliminate composite numbers
	 *   up to the limit.
	 * - The sieve tracks previously marked primes without increasing
	 *   the computation time unnecessarily. This allows the sieve to
	 *   jump ahead to the square of the current prime and
	 *   remove all the factors of the current prime.
	 */
	
	std::vector<int> prime(limit, true);
	for (int i = 2; i * i <= limit; i++) {
		if (prime[i] == true) {
			for (int j = i * i; j <= limit; j += i) {
				prime[j] = false;
			}
		}
	}
	
	long long int sum = 0;
	for (int i = 2; i <= limit; i++) {
		if (prime[i] == true) {
			sum += i;
		}
	}
	
	printf("%lli\n", sum);
	
	return 0;
}

/*
 * Runtime (Apple M1): 3'288'541ns (3'288.54µs) (3.29ms)
 * Complexity: O(n)
 */
