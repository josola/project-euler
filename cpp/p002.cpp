/* 
 * Project Euler
 * Problem 2 - Even Fibonacci numbers
 * 
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <iostream>


int main() {

	// Setup

	const int sequence_start = 0;

	int term_a = sequence_start;
	int term_b = 1;

	int next_term = 0;

	int total = 0;
	const int limit = 4000000;

	// Logic

	while (total < limit) {

		next_term = term_a + term_b;

		term_a = term_b;
		term_b = next_term;

		if (next_term % 2 == 0)
			total += next_term;

	}

	// Result

	std::cout << total << std::endl;

	// Exit

	return 0;

}