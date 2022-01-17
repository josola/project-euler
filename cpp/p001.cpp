/* Project Euler
   Problem 1 - Multiples of 3 or 5
   (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
   Written by Jordan Sola 2020-2021 */

#include <iostream>
#include <array>

int compute(const int LIMIT) {
	
	std::array<int, 3> a = {3, 5, -15};
	std::array<int, 3> n = {((LIMIT - 1) / a[0]), ((LIMIT - 1) / a[1]), ((LIMIT - 1) / a[2])};
	std::array<int, 3> n_plus = {1, 1, -1};
	
	/* - Gauss Summation Formula: sum = a(n(n + 1) / 2).
	     a = factor (3, 5, -15)
	     n = LIMIT (999) / factor (3, 5, -15)
	   - We need to remove 15 as it is a factor of numbers that have already
	     been counted as factors of 3 and 5. */
	
	int sum = 0;
	for (int i = 0; i < 3; i++)
		sum += a[i] * (n[i] * (n[i] + n_plus[i]) / 2);
	
	return sum;
	
}

int main() {
	std::cout << compute(1000) << std::endl;
	return 0;
}

// Answer: 233168

/* Run on (8 X 24.1205 MHz CPU s) ARM64
   -------------------------------------------------------------
   Benchmark                   Time             CPU   Iterations
   -------------------------------------------------------------
   p001_bench/1000          0.84 ns         0.84 ns    735286394
   p001_bench_BigO             O(1)            O(1)              */
