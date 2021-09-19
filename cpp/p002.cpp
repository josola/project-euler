/* 
 * Project Euler
 * Problem 2 - Even Fibonacci numbers
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include "stdio.h"

int main() {

	int a = 2;
	int b = 8;
	int sum = 0;

	while (a < 4000000) {
		sum += a;
		int temp = b;
		b = 4 * b + a;
		a = temp;
	}
	
	printf("%i\n", sum);
	return 0;
}