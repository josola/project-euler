#include <cmath>
#include <iostream>

int compute(const int LIMIT) {
	int difference = 0;
	difference = pow(LIMIT * (LIMIT + 1) / 2, 2) - (LIMIT * (LIMIT + 1) * ((2 * LIMIT) + 1) / 6);
	return difference;
}

int main() {
	std::cout << compute(100) << std::endl;
	return 0;
}
