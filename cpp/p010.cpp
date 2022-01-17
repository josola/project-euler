/* Project Euler
   Problem 10 - Summation of primes
   (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
   Written by Jordan Sola 2020-2021 */

#include <iostream>
#include <vector>

long long int compute(const int LIMIT) {
	
	/* - Uses Sieve of Eratosthenes to eliminate composite
	     numbers up to the LIMIT.
	   - The sieve tracks previously marked primes without increasing
	     the computation time unnecessarily. This allows the sieve to
	     jump ahead to the square of the current prime and
	     remove all the factors of the current prime. */
	
	std::vector<int> prime(LIMIT, true);
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
	std::cout << compute(2000000) << std::endl;
	return 0;
}

// Answer: 142913828922

/* Run on (8 X 24.1208 MHz CPU s) ARM64
   ------------------------------------------------------------------
   Benchmark                        Time             CPU   Iterations
   ------------------------------------------------------------------
   p010_bench/2'000'000          2.83 ms         2.83 ms          245
   p010_bench_BigO             O(N LogN)       O(N LogN)              */
