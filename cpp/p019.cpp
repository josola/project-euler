#include <iostream>
#include <array>

int day(const int DAY, const int MONTH, int year, std::array<int, 12> month_code) {
	if (MONTH < 3)
		year--;
	return (year + (year / 4) - (year / 100) + (year / 400) + month_code[MONTH - 1] + DAY) % 7;
}

int compute() {
	std::array<int, 3> start = { 1, 1, 1901 };
	std::array<int, 3> end = { 31, 12, 2000 };
	const int TARGET_DAY_MONTH = 1;
	std::array<int, 12> month_code = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
	int day_date_matches = 0;
	for (int year = start[2]; year <= end[2]; year++) {
		for (int month = 1; month <= 12; month++) {
			if (day(TARGET_DAY_MONTH, month, year, month_code) == 0)
				day_date_matches++;
		}
	}
	return day_date_matches;
}

int main() {
	std::cout << compute() << std::endl;
	return 0;
}
