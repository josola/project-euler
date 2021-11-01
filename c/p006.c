/* 
 * Project Euler
 * Problem 6 - Sum square difference
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021
 */

#include "stdio.h"
#include "math.h"

int compute(const int limit) {
	
	/*
		- We find this by using Gauss's Series formula.
		- Square Sum Formula: m = ((n)(n + 1) / 2)^2
		- Sum Square Formula: m = (n)(n + 1)(2n + 1) / 6
	*/
	
	int difference = 0;
	difference = pow(limit * (limit + 1) / 2, 2) - (limit * (limit + 1) * ((2 * limit) + 1) / 6);
	
	return difference;
	
}

int main() {
	printf("%i\n", compute(100));
	return 0;
}

// Answer: 25164150

// Asymptotic complexity: O(i)
