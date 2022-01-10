/* Project Euler
 * Problem 5 - Smallest multiple
 * (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021 */

#include "stdio.h"
#include "stdlib.h"

int gcd(const int A, const int B) {
	
	int gcd = 0;
	for (int i = 1; i <= A && i <= B; i++) {
		if (A % i == 0 && B % i == 0)
			gcd = i;
	}
	
	return gcd;
	
}

long int compute(const int start, const int end) {
	
	/* - We are looking for the least common multiple (LCM) of the input set.
	   - We use A formula for the LCM by greatest common factor (GCF).
	   - Formula: LCM(A, B) = |(A × B)| / GCF(A, B)
	     A = previous LCM in set, starting at the first term in the set
	     B = next term in set */
	
	long int smallest_multiple = start;
	for (int i = 2; i < end + 1; i++) {
		smallest_multiple = labs(smallest_multiple * i) / gcd(smallest_multiple, i);
	}
	
	return smallest_multiple;
	
}

int main() {
	printf("%li\n", compute(1, 20));
	return 0;
}

/* Answer: 232,792,560
   Asymptotic complexity: O(N) */
