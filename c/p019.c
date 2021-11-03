/* 
 * Project Euler
 * Problem 19 - Counting Sundays
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021
 */

#include "stdio.h"

int day(const int day, const int month, int year, const int month_code[12]) {
	
	/*
	* This algorithm was developed by Tomohiko Sakamoto,
	* who adapted it from John Conways' DOOMSDAY algorithm.
	*/
	
	// Compensate for leap year
	if (month < 3) {
		year--;
	}
	
	// Sakamoto's algorithm
	return (year + (year / 4) - (year / 100) + (year / 400) + month_code[month - 1] + day) % 7;
	
}

int compute() {
	
	int start[3] = { 1, 1, 1901 };
	int end[3] = { 31, 12, 2000 };
	
	const int target_weekday = 0; // Desired day of the week e.g. SUNDAY: 0
	const int target_day_of_month = 1; // Desired day of the month
	
	/*
	* MONTH_CODE is acquired by using the pattern for
	* month starts found in Tomohiko Sakamoto's algorithm for days.
	*/
	const int month_code[12] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
	
	int day_date_matches = 0;
	
	for (int year = start[2]; year <= end[2]; year++) {
		for (int month = 1; month <= 12; month++)
			if (day(target_day_of_month, month, year, month_code) == 0)
				day_date_matches++;
	}
	
	return day_date_matches;
	
}

int main() {
	printf("%i\n", compute());
	return 0;
}

// Answer: 171

// Asymptotic complexity: O(N)
