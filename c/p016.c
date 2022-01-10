/* Project Euler
 * Problem 16 - Power digit sum
 * (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021 */

#include "stdio.h"
#include "math.h"

int compute(const int BASE, const int EXPONENT) {
	
	const int NUM_SIZE = 305;
	char str[NUM_SIZE] = {0};
	float prod = pow(BASE, EXPONENT);
	sprintf(str, "%f", prod);
	
	/* - To get individual digits in any length number,
	     the number must be converted to an ASCII string.
	   - To get the integer equivalent of an ASCII character, you
	     subtract the character by '0', or its ASCII value of 48.
	   - For example, the ASCII value of '1' is 49.
	     '1' - '0' = 1 or 49 - 48 = 1 */
	
	int sum = 0;
	for (int i = 0; i < NUM_SIZE; i++) {
		if (str[i] != '.' && str[i] != '0')
			sum += str[i] - '0';
	}
	
	return sum;
	
}

int main() {
	printf("%i\n", compute(2, 1000));
	return 0;
}

/* Answer: 1,366
   Asymptotic complexity: O(N) */
