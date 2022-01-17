/* Project Euler
   Problem 6 - Sum square difference
   (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
   Written by Jordan Sola 2020-2021 */

#include <cmath>
#include <iostream>

int compute(const int LIMIT) {
	
	/* - We find this by using Gauss's Series formula.
	   - Square Sum Formula: m = ((n)(n + 1) / 2)^2
	   - Sum Square Formula: m = (n)(n + 1)(2n + 1) / 6 */
	
	int difference = 0;
	difference = pow(LIMIT * (LIMIT + 1) / 2, 2) - (LIMIT * (LIMIT + 1) * ((2 * LIMIT) + 1) / 6);
	
	return difference;
	
}

int main() {
	std::cout << compute(100) << std::endl;
	return 0;
}

// Answer: 25164150

/* Run on (8 X 24.029 MHz CPU s) ARM64
   ---------------------------------------------------------
   Benchmark               Time             CPU   Iterations
   ---------------------------------------------------------
   p006_bench/100       1.10 ns         1.10 ns    556010072
   p006_bench_BigO         O(1)            O(1)              */
