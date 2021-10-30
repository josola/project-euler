/*
 * Project Euler
 * Problem 1 - Multiples of 3 or 5
 * (C) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021
 */

#include "stdio.h"
#include "time.h"

int compute(const int limit)
{
	int a[3] = {3, 5, -15};
	int n[3] = {((limit - 1) / a[0]), ((limit - 1) / a[1]), ((limit - 1) / a[2])};
	int n_plus[3] = {1, 1, -1};
	/*
	 * - Gauss Summation Formula: sum = a(n(n + 1) / 2).
	 *   a = factor (3, 5, -15)
	 *   n = limit (999) / factor (3, 5, -15)
	 * - We need to remove 15 as it is a factor of numbers that have already
	 *   been counted as factors of 3 and 5.
	 */
	int sum = 0;
	for (int i = 0; i < 3; i++)
		sum += a[i] * (n[i] * (n[i] + n_plus[i]) / 2);
	return sum;
}

int main()
{
	printf("%i\n", compute(1000));
	return 0;
}

// Answer: 233168

// Asymptotic complexity: O(1)
