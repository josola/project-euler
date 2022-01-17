/* Project Euler
   Problem 17 - Number-letter-counts
   (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
   Written by Jordan Sola 2021 */

#include <iostream>
#include <string>
#include <array>

int compute(const int START, const int END) {
	
	std::array<std::string, 20> ones_place = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "forteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
	std::array<std::string, 10> tens_place = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
	std::string hundreds_place = "hundred";
	
	int total = 0;
	
	for (int i = START; i <= END; i++) {
		
		std::string word = "";
		
		if (i < 20)
			word = ones_place[i];
		
		else if (i >= 20 && i < 100)
			word = tens_place[i / 10] + ones_place[i % 10];
		
		else if (i >= 100 && (i % 100) / 10 == 0 && i % 10 == 0 && i < 1'000)
			word = ones_place[i / 100] + hundreds_place;
		
		else if (i >= 100 && (i % 100) / 10 < 2 && i < 1'000)
			word = ones_place[i / 100] + hundreds_place + "and" + ones_place[i % 100];
		
		else if (i >= 120 && i < 1'000)
			word = ones_place[i / 100] + hundreds_place + "and" + tens_place[(i % 100) / 10] + ones_place[i % 10];
		
		else if (i == 1'000)
			word = "onethousand";
		
		total += word.size();
		
	}
	
	return total;
	
}

int main() {
	std::cout << compute(1, 1000) << std::endl;
	return 0;
}

// Answer: 21124

/* Run on (8 X 24.122 MHz CPU s) ARM64
   -----------------------------------------------------------------------
   Benchmark                             Time             CPU   Iterations
   -----------------------------------------------------------------------
   p017_bench/1'000                   51.4 us         51.4 us        10655
   p017_bench_BigO                       O(N)            O(N)              */
