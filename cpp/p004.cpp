/* 
 * Project Euler
 * Problem 4 - Largest palindrome product
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <iostream>

int compute(const int limit) {

	int palindrome = 0;
	
	/*
	 * The largest palindrome between two three digit numbers is six digits
	 * long. Six digit numbers have a factor of eleven. We can start our inner
	 * loop at 990, the highest three digit number with a factor of eleven.
	 */
	
	for (int i = limit; i > 100; i--) {
		for (int j = 990; j > 100; j -= 11) {
			
			if (palindrome > (i * j))
				break;
			
			else {

				int product = i * j;
				int reverse = 0;

				while (product != 0) {
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
	
	std::cout << compute(999) << std::endl;
	return 0;

}
