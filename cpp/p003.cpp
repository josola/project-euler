/* Project Euler
   Problem 3 - Largest prime factor
   (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
   Written by Jordan Sol 2020-2021 */

#include <iostream>

long long int compute(const long long int NUM) {
	
	long long int output = NUM;
	
	/* - Any prime number that is greater than a composite number cannot be the
	     largest prime, we elimenate primes greater than a constant by
	     dividing the NUM by its composite. */
	
	for (long long int i = 3; i < output; i += 2) {
		if (output % i == 0)
			output /= i;
	}
	
	return output;
	
}

int main() {
	std::cout << compute(600851475143) << std::endl;
	return 0;
}

// Answer: 6'857

/* Run on (8 X 24.039 MHz CPU s) ARM64
   ------------------------------------------------------------------
   Benchmark                        Time             CPU   Iterations
   ------------------------------------------------------------------
   p003_bench/600'851'475'143    13.3 us         13.3 us        46997
   p003_bench_BigO               O(LogN)         O(LogN)              */
