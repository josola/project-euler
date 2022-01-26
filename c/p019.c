/* Project Euler
   Problem 19 - Counting Sundays
   (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
   Written by Jordan Sola 2021 */

#include "stdio.h"

int day(const int DAY, const int MONTH, int year, const int MONTH_CODE[12]) {
	
	/* This algorithm was developed by Tomohiko Sakamoto,
	   who adapted it from John Conways' DOOMSDAY algorithm. */
	
	// Compensate for leap year
	if (MONTH < 3)
		year--;
	
	// Sakamoto's algorithm
	return (year + (year / 4) - (year / 100) + (year / 400) + MONTH_CODE[MONTH - 1] + DAY) % 7;
	
}

int compute() {
	
	int start[3] = { 1, 1, 1901 };
	int end[3] = { 31, 12, 2000 };
	
	const int TARGET_DAY_MONTH = 1; // Desired day of the month
	
	/* MONTH_CODE is acquired by using the pattern for
	   month starts found in Tomohiko Sakamoto's algorithm for days. */

	const int MONTH_CODE[12] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
	
	int day_date_matches = 0;
	
	for (int year = start[2]; year <= end[2]; year++) {
		
		for (int MONTH = 1; MONTH <= 12; MONTH++) {
			if (day(TARGET_DAY_MONTH, MONTH, year, MONTH_CODE) == 0)
				day_date_matches++;
		}
		
	}
	
	return day_date_matches;
	
}

int main() {
	printf("%i\n", compute());
	return 0;
}

/* Answer: 171
   Complexity: O(N) */
