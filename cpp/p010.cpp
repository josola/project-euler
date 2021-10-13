/* 
 * Project Euler
 * Problem 10 - Summation of primes
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <vector>
#include <iostream>

long long int compute(const int limit) {

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

	return sum;

}

int main() {
	
	std::cout << compute(2'000'000) << std::endl;
	return 0;

}
