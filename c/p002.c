/* Project Euler
 * Problem 2 - Even Fibonacci numbers
 * (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021 */

#include "math.h"
#include "stdio.h"

int compute(const int LIMIT) {
	
	const double phi = (1 + sqrt(5)) / 2;
	
	/* - nth fibonacci term formula: nth = (phi^n – (1 - phi)^n) / sqrt[5]
	   - Every third term in a fibonacci sequence is even. */
	
	int sum = 0;
	int term = 3;
	while (sum < (LIMIT / 3)) {
		sum += (pow(phi, term) - pow((1 - phi), term)) / sqrt(5);
		term += 3;
	}
	
	return sum;
	
}

int main() {
	printf("%i\n", compute(4000000));
	return 0;
}

/* Answer: 4,613,732
   Asymptotic complexity: O(LogN) */
