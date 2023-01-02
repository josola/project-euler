#include <iostream>
#include <vector>

int compute(const int TARGET) {
	std::vector<int> amicable_pairs = {};
	int sum = 0;
	for (int num_a = 220; num_a <= TARGET; num_a++) {
		int div_a = 0;
		for (int i = 1; i < num_a; i++) {
			if (num_a % i == 0)
				div_a += i;
		}
		int div_b = 0;
		for (int i = 1; i < div_a; i++) {
			if (div_a % i == 0)
				div_b += i;
		}
		if (num_a == div_b && div_a != div_b) {
			bool duplicate = false;
			for (auto i : amicable_pairs) {
				if (i == div_a) {
					duplicate = true;
					break;
				}
			}
			if (!duplicate) {
				amicable_pairs.push_back(num_a);
				amicable_pairs.push_back(div_a);
				sum += num_a + div_a;
			}
		}
	}
	return sum;
}

int main() {
	std::cout << compute(10000) << std::endl;
	return 0;
}
