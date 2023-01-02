#include <iostream>
#include <vector>

long long int compute(const int LIMIT) {
	std::vector<int> prime(LIMIT, true);
	for (long int i = 2; i * i <= LIMIT; i++) {
		if (prime[i] == true) {
			for (long long int j = i * i; j <= LIMIT; j += i)
				prime[j] = false;
		}
	}
	long long int sum = 0;
	for (int i = 2; i <= LIMIT; i++) {
		if (prime[i] == true)
			sum += i;
	}
	return sum;
}

int main() {
	std::cout << compute(2000000) << std::endl;
	return 0;
}
