/* 
 * Project Euler
 * Problem 2 - Even Fibonacci numbers
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2020-2021
 */

#include <cmath>

#include "stdio.h"
#include "runtime.hpp"

int main() {

	const double phi = (1 + sqrt(5)) / 2;
	const int limit = 4'000'000 / 3;
	
	/*
	 * - nth fibonacci ferm formula: nth = [Phi^n – (phi)^n] / Sqrt[5]
	 * - Every third term in a fibonacci sequence is even.
	 */
	
	int sum = 0;
	int term = 3;

	{
		bm::runtime timer;
		while (sum < limit) {
			sum += static_cast<int>((pow(phi, term) - pow((1 - phi), term)) / sqrt(5));
			term += 3;
		}
	}
	
	printf("%i\n", sum);

	return 0;
}

/*
 * Runtime (Apple M1): 4,334ns (4.33µs)
 * Complexity: O(log n)
 */
