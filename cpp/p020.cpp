#include <iostream>
#include <string>

int compute(const int TARGET) {
	const int CEIL = TARGET;
	const int FLOOR = 1;
	const int INCR = 1;
	std::string str_factorial = std::to_string(FLOOR);
	for (int i = FLOOR + INCR; i <= CEIL; i += INCR) {
		std::string str_i = std::to_string(i);
		std::string product(str_i.size() + str_factorial.size(), 0);
		for (int j = str_i.size() - 1; j >= 0; j--) {
			for (int k = str_factorial.size() - 1; k >= 0; k--) {
				int n = (str_i[j] - '0') * (str_factorial[k] - '0') + product[j + k + 1];
				product[j + k + 1] = n % 10;
				product[j + k] += n / 10;
			}
		}
		for (int j = 0; j < product.size(); j++)
			product[j] += '0';
		str_factorial = product;
	}
	int output = 0;
	for (int i = str_factorial.size() - 1; i >= 0; i--)
		output += str_factorial[i] - '0';
	return output;
}

int main() {
	std::cout << compute(100) << std::endl;
	return 0;
}
