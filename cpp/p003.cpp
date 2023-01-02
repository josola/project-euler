#include <iostream>

long long int compute(const long long int NUM) {
	long long int output = NUM;
	for (long long int i = 3; i < output; i += 2) {
		if (output % i == 0)
			output /= i;
	}
	return output;
}

int main() {
	std::cout << compute(600851475143) << std::endl;
	return 0;
}
