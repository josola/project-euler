/* Project Euler
 * Problem 23 - Non-abundant sums
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021 */

#include <iostream>
#include <vector>

int compute(const int n) {
		
	// Produce abundant numbers up to n
	std::vector<int> abundant;
	
	for (int a = 1; a <= n; a++) {
		int a_sum = 0;
		for (int i = 1; i < a; i++) {
			if (a % i == 0)
				a_sum += i;
		}
		if (a_sum > a)
			abundant.push_back(a);
	}
	
	// Determine whether numbers up to n are the sum of two abundant numbers
	std::vector<int> sum_abundant(n + 1, 0);
	
	for (int a = 0; a < abundant.size(); a++) {
		for (int b = a; b < abundant.size(); b++) {
			if (abundant[a] + abundant[b] <= n)
				sum_abundant[abundant[a] + abundant[b]] = 1;
			else
				break;
		}
	}
	
	// Sum up numbers that are not a sum of two abundant numbers
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (!sum_abundant[i])
			sum += i;
	}
	
	return sum;
	
}

int main() {
	std::cout << compute(28123) << std::endl;
	return 0;
}

// Answer: 4179871

/* Run on (8 X 24.1129 MHz CPU s) ARM64
   -----------------------------------------------------
   Benchmark           Time             CPU   Iterations
   -----------------------------------------------------
   p023_bench        254 ms          254 ms            2
   p023_BigO              ?               ?              */
