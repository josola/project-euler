#include "math.h"
#include "stdio.h"

int compute(const int LIMIT) {
	const double phi = (1 + sqrt(5)) / 2;
	int sum = 0;
	int term = 3;
	while (sum < (LIMIT / 3)) {
		sum += (pow(phi, term) - pow((1 - phi), term)) / sqrt(5);
		term += 3;
	}
	return sum;
}

int main() {
	printf("%i\n", compute(4000000));
	return 0;
}
