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
