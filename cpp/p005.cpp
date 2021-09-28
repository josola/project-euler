/* 
 * Project Euler
 * Problem 5 - Smallest multiple
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <numeric>
#include <iostream>

int main() {
	
	const int limit = 20;
	
	/*
	 * - We're looking for the least common multiple (LCM) of the input set.
	 * - We use a formula for the LCM by greatest common factor (GCF).
	 * - Formula: LCM(a,b) = |(a×b)|/GCF(a,b)
	 *   a = previous LCM in set, starting at the first term in the set
	 *   b = term in set
	 */
	
	long long int result = limit - (limit - 1);
	
	for (int i = 2; i < limit + 1; i++)
		result = abs(result * i) / std::gcd(result, i);
	
	std::cout << result << std::endl;
	
	return 0;
}

/*
 * Runtime (Apple M1): 250ns (0.25µs)
 * Complexity: O(n)
 */
