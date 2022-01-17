/* Project Euler
 * Problem 16 - Power digit sum
 * (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021 */

#include <iostream>
#include <cmath>
#include <string>

int compute(const int BASE, const int EXPONENT) {
	
	std::string product = std::to_string(pow(BASE, EXPONENT));
	
	/* - To get individual digits in any length number,
	     the number must be converted to an ASCII string.
	   - To get the integer equivalent of an ASCII character, you
	     subtract the character by '0', or its ASCII value of 48.
	   - For example, the ASCII value of '1' is 49.
	     '1' - '0' = 1 or 49 - 48 = 1 */
	
	int sum = 0;
	for (char &num : product) {
		if (num != '.' && num != '0')
			sum += num - '0';
	}
	
	return sum;
	
}

int main() {
	std::cout << compute(2, 1000) << std::endl;
	return 0;
}

// Answer: 1'366

/* Run on (8 X 24.121 MHz CPU s) ARM64
   -----------------------------------------------------------------------
   Benchmark                             Time             CPU   Iterations
   -----------------------------------------------------------------------
   p016_bench/1'000                   31.3 us         31.3 us        22083
   p016_bench_BigO                       O(N)            O(N)              */
