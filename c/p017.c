/* 
 * Project Euler
 * Problem 17 - Number-letter-counts
 * (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021
 */

#include "stdio.h"
#include "string.h"

int compute(const int start, const int end) {
	
	int ones[20] = { 0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6, 8, 8, 7, 7, 9, 8, 8 };
	int tens[10] = { 0, 0, 6, 6, 5, 5, 5, 7, 6, 6 };
	int hundred = 7;
	int total = 0;
	
	for (int i = start; i <= end; i++) {
		
		if (i < 20)
			total += ones[i];
		else if (i >= 20 && i < 100)
			total += tens[i / 10] + ones[i % 10];
		else if (i >= 100 && (i % 100) / 10 == 0 && i % 10 == 0 && i < 1000)
			total += ones[i / 100] + hundred;
		else if (i >= 100 && (i % 100) / 10 < 2 && i < 1000)
			total += ones[i / 100] + hundred + 3 + ones[i % 100];
		else if (i >= 120 && i < 1000)
			total += ones[i / 100] + hundred + 3 + tens[(i % 100) / 10] + ones[i % 10];
		else if (i == 1000)
			total += 11;
		
	}
	
	return total;
	
}

int main() {
	printf("%i\n", compute(1, 1000));
	return 0;
}

// Answer: 21124

// Asymptotic complexity: O(N)
