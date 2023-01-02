#include <iostream>
#include <cmath>
#include <string>

int compute(const int BASE, const int EXPONENT) {
	std::string product = std::to_string(pow(BASE, EXPONENT));
	int sum = 0;
	for (char &num : product) {
		if (num != '.' && num != '0')
			sum += num - '0';
	}
	return sum;
}

int main() {
	std::cout << compute(2, 1000) << std::endl;
	return 0;
}
