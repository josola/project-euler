#include "stdio.h"
#include "math.h"

int compute(const int limit) {
	int difference = 0;
	difference = pow(limit * (limit + 1) / 2, 2) - (limit * (limit + 1) * ((2 * limit) + 1) / 6);
	return difference;
}

int main() {
	printf("%i\n", compute(100));
	return 0;
}
