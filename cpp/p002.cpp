#include <iostream>
#include <cmath>

int compute(const int LIMIT) {
	const double PHI = (1 + sqrt(5)) / 2;
	int sum = 0;
	int term = 3;
	while (sum < (LIMIT / 3)) {
		sum += (pow(PHI, term) - pow((1 - PHI), term)) / sqrt(5);
		term += 3;
	}
	return sum;
}

int main() {
	std::cout <<  compute(4000000) << std::endl;
	return 0;
}
