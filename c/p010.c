#include "stdbool.h"
#include "stdio.h"

long long int compute(const int LIMIT) {
	bool prime[LIMIT];
	for (int i = 0; i < LIMIT; i++)
		prime[i] = true;
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
	printf("%lli\n", compute(2000000));
	return 0;
}
