#include <iostream>
#include <numeric>

long int compute(const int START, const int END) {
	long int result = START;
	for (int i = 2; i < END + 1; i++)
		result = abs(result * i) / std::gcd(result, i);
	return result;
}

int main() {
	std::cout << compute(1, 20) << std::endl;
	return 0;
}
