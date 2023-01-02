#include <iostream>

int compute(const int LIMIT) {
	int palindrome = 0;
	for (int i = LIMIT; i > 100; i--) {
		for (int j = LIMIT; j > 100; j--) {
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

int main() {
	std::cout << compute(999) << std::endl;
	return 0;
}
