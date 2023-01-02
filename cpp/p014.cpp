#include <iostream>

int compute(const int LIMIT) {
	int max_start = 0;
	int max_length = 0;
	for (int i = (LIMIT / 2) + 1; i < LIMIT; i++) {
		long long int start = i;
		int length = 0;
		while (start != 1) {
			if (start % 2 == 0)
				start /= 2;
			else if (start % 2 != 0)
				start = (3 * start) + 1;
			length++;
		}
		if (length > max_length) {
			max_length = length;
			max_start = i;
		}
	}
	return max_start;
}

int main() {
	std::cout << compute(1000000) << std::endl;
	return 0;
}
