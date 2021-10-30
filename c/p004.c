/* 
 * Project Euler
 * Problem 4 - Largest palindrome product
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021
 */

#include "stdio.h"

int compute(const int limit)
{
	int palindrome = 0;
	for (int i = limit; i > 100; i--)
	{
		for (int j = limit; j > 100; j--)
		{
			if (palindrome > (i * j))
				break;
			else
			{
				int product = i * j;
				int reverse = 0;
				while (product != 0)
				{
					reverse = reverse * 10 + product % 10;
					product /= 10;
				}
				if (reverse == (i * j))
					palindrome = i * j;
			}
		}
	}
	return palindrome;
}

int main()
{
	printf("%i\n", compute(999));
	return 0;
}

// Answer: 906609

// Asymptotic complexity: O(N LogN)
