/* 
 * Project Euler
 * Problem 3 - Largest prime factor
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <iostream>

long long int compute(const long long int num) {

	long long int output = num;

	/*
	 * Any prime number that is greater than a composite number cannot be the
	 * largest prime, we elimenate primes greater than a constant by
	 * dividing the num by its composite.
	 */
	
	for (long int i = 3; i < output; i += 2) {
		if (output % i == 0)
			output /= i;
	}

	return output;

}

int main() {
	
	std::cout << compute(600'851'475'143) << std::endl;
	return 0;

}
