/* 
 * Project Euler
 * Problem 9 - Special Pythagorean triplet
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <cmath>

#include "stdio.h"

int main() {
	
	int a = 0;
	int b = 0;
	int c = 0;
	int target = 1000;
	
	bool found = 0;
	for (a = 1; a < target; a++) {
		
		for (b = a; b < target; b++) {
			
			c = target - a - b;
			
			int first = pow(a, 2);
			int second = pow(b, 2);
			int third = pow(c, 2);
			
			if (first + second == third) {
				found = true;
				break;
			}
		}
		
		if (found)
			break;
	}
	
	printf("%i\n", a * b * c);
	
	return 0;
}

/*
 * Runtime (Apple M1): 126.92µs
 * Complexity: O(n^2)
 */
