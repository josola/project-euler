/* 
 * Project Euler
 * Problem 2 - Even Fibonacci numbers
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2020-2021
 */

#include <cmath>
#include <iostream>

int compute(const int limit) {

	const double phi = (1 + sqrt(5)) / 2;
	
	/*
	 * - nth fibonacci ferm formula: nth = [Phi^n – (phi)^n] / Sqrt[5]
	 * - Every third term in a fibonacci sequence is even.
	 */
	
	int sum = 0;
	int term = 3;
	while (sum < (limit / 3)) {
		sum += static_cast<int>((pow(phi, term) - pow((1 - phi), term)) / sqrt(5));
		term += 3;
	}

	return sum;

}

int main() {
	
	std::cout << compute(4'000'000) << std::endl;
	return 0;

}
