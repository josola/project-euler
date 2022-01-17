/* Project Euler
   Problem 12 - Highly divisible triangular number
   (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
   Written by Jordan Sola 2020-2021 */

#include <iostream>
#include <cmath>

long int compute(const int TARGET) {
	
	int term = 1;
	long int triangular = 0;
	
	int div_count = 0;
	while (div_count < TARGET) {
		
		term++;
		div_count = 0;
		
		/* - Triangular numbers and arithmetic progressions can be found
		     using the same formula.
		   - Triangular number (arithmetic progression): a = n * (n + 1) / 2
		     Where "a" is the triangular number, and "n" is the last number
		     in the arithmetic progression (term).
		   - See p001, and p006 for more examples of
		     the arithmetic progression formula. */
		
		triangular = term * (term + 1) / 2;
		
		/* - We can take the same algorithm p003 used to find
		     the largest prime factor and adapt it to find all the
		     factors belonging to our triangular number. */
		
		int root = sqrt(triangular);
		for (int i = 1; i <= root + 1; i++) {
			if (triangular % i == 0)
				div_count += 2;
		}
		
	}
	
	return triangular;
	
}

int main() {
	std::cout << compute(500) << std::endl;
	return 0;
}

// Answer: 76576500

/* Run on (8 X 24.1214 MHz CPU s) ARM64
   -----------------------------------------------------------
   Benchmark                 Time             CPU   Iterations
   -----------------------------------------------------------
   p012_bench/500         37.0 ms         37.0 ms           19
   P012_bench_BigO           O(N)            O(N)              */
