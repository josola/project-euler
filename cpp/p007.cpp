#include <iostream>

int compute(const int LIMIT) {
	int count = 2;
	int prime = 3;
	while (count < LIMIT) {
		prime += 2;
		bool is_prime = true;
		if (prime % 3 == 0)
			continue;
		else {
			for (int i = 5; i * i <= prime; i += 6) {
				if (prime % i == 0 || prime % (i + 2) == 0)
					is_prime = false;
				continue;
			}
		}
		if (is_prime)
			count++;
	}
	return prime;
}

int main() {
	std::cout << compute(10001) << std::endl;
	return 0;
}
