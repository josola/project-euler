#include "stdio.h"

long long int compute(const long long int NUM) {
	long long int output = NUM;
	for (long long int i = 3; i < output; i += 2) {
		if (output % i == 0)
			output /= i;
	}
	return output;
}

int main() {
	printf("%lli\n", compute(600851475143));
	return 0;
}
