/* 
 * Project Euler
 * Problem 6 - Sum square difference
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <cmath>
#include <iostream>

int compute(const int limit) {

	/*
	 * - We find this by using Gauss's series formula.
	 * - Square Sum Formula: m = ((n)(n + 1) / 2)^2
	 * - Sum Square Formula: m = (n)(n + 1)(2n + 1) / 6
	 */
	
	return (pow(limit * (limit + 1) / 2, 2)) - (limit * (limit + 1) * ((2 * limit) + 1) / 6);

}

int main() {
	
	std::cout << compute(100) << std::endl;
	return 0;

}

/*
 * Runtime (Apple M1): 42ns
 * Complexity: O(1)
 */
