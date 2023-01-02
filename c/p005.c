#include "stdio.h"
#include "stdlib.h"

int gcd(const int A, const int B) {
	int gcd = 0;
	for (int i = 1; i <= A && i <= B; i++) {
		if (A % i == 0 && B % i == 0)
			gcd = i;
	}
	return gcd;
}

long int compute(const int start, const int end) {
	long int smallest_multiple = start;
	for (int i = 2; i < end + 1; i++) {
		smallest_multiple = labs(smallest_multiple * i) / gcd(smallest_multiple, i);
	}
	return smallest_multiple;
}

int main() {
	printf("%li\n", compute(1, 20));
	return 0;
}
