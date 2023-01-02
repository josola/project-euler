#include <iostream>
#include <vector>

int compute(const int n) {
	std::vector<int> abundant;
	for (int a = 1; a <= n; a++) {
		int a_sum = 0;
		for (int i = 1; i < a; i++) {
			if (a % i == 0)
				a_sum += i;
		}
		if (a_sum > a)
			abundant.push_back(a);
	}
	std::vector<int> sum_abundant(n + 1, 0);
	for (int a = 0; a < abundant.size(); a++) {
		for (int b = a; b < abundant.size(); b++) {
			if (abundant[a] + abundant[b] <= n)
				sum_abundant[abundant[a] + abundant[b]] = 1;
			else
				break;
		}
	}
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (!sum_abundant[i])
			sum += i;
	}
	return sum;
}

int main() {
	std::cout << compute(28123) << std::endl;
	return 0;
}
