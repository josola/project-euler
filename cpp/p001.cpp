#include <iostream>
#include <array>

int compute(const int LIMIT) {
	std::array<int, 3> a = {3, 5, -15};
	std::array<int, 3> n = {((LIMIT - 1) / a[0]), ((LIMIT - 1) / a[1]), ((LIMIT - 1) / a[2])};
	std::array<int, 3> n_plus = {1, 1, -1};
	int sum = 0;
	for (int i = 0; i < 3; i++)
		sum += a[i] * (n[i] * (n[i] + n_plus[i]) / 2);
	return sum;
}

int main() {
	std::cout << compute(1000) << std::endl;
	return 0;
}
