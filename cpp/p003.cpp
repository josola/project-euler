/* 
 * Project Euler
 * Problem 3 - Largest prime factor
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include "stdio.h"

int main() {

	long long int num = 600851475143;

	for (long int i = 2; i < num; i++) {
		if (num % i == 0)
			num /= i;
	}

	printf("%lli\n", num);
	return 0;
}