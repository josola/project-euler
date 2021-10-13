/* 
 * Project Euler
 * Problem 9 - Special Pythagorean triplet
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <cmath>
#include <iostream>

int compute(const int target) {

	int a = 0;
	int b = 0;
	int c = 0;
	
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

	return a * b * c;

}

int main() {
	
	std::cout << compute(1'000) << std::endl;
	return 0;

}
