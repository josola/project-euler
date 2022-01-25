/* Project Euler
   Problem 2 - Even Fibonacci numbers
   (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
   Written by Jordan Sola 2020-2021 */

#include <iostream>
#include <cmath>

int compute(const int LIMIT) {
	
	const double PHI = (1 + sqrt(5)) / 2;
	
	/* - nth fibonacci term formula: nth = (PHI^n – (1 - PHI)^n) / sqrt[5]
	   - Every third term in a fibonacci sequence is even. */
	
	int sum = 0;
	int term = 3;
	while (sum < (LIMIT / 3)) {
		sum += (pow(PHI, term) - pow((1 - PHI), term)) / sqrt(5);
		term += 3;
	}
	
	return sum;
	
}

int main() {
	std::cout <<  compute(4000000) << std::endl;
	return 0;
}

/* Answer: 4613732
   
   Complexity: O(LogN)
   
   Run on (8 X 24.1205 MHz CPU s) ARM64
   --------------------------------------------------------------
   Benchmark                    Time             CPU   Iterations
   --------------------------------------------------------------
   p002_bench/4000000         197 ns          197 ns      3536675 */
