/* 
 * Project Euler
 * Problem 6 - Sum square difference
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <iostream>
#include <cmath>

int main() {

	const int limit = 100;
	
	/*
	 * - We find this by using Gauss's series formula.
	 * - Square Sum Formula: m = ((n)(n + 1) / 2)^2
	 * - Sum Square Formula: m = (n)(n + 1)(2n + 1) / 6
	 */
	
	long long int difference = (pow(limit * (limit + 1) / 2, 2)) - (limit * (limit + 1) * ((2 * limit) + 1) / 6);
	
	std::cout << difference << std::endl;

	return 0;
}

/*
 * Runtime (Apple M1): 42ns (0.04µs)
 * Complexity: O(1)
 */
