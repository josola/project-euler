#include "stdio.h"
#include "math.h"

int compute(const int BASE, const int EXPONENT) {
	const int NUM_SIZE = 305;
	char str[NUM_SIZE] = {0};
	float prod = pow(BASE, EXPONENT);
	sprintf(str, "%f", prod);
	int sum = 0;
	for (int i = 0; i < NUM_SIZE; i++) {
		if (str[i] != '.' && str[i] != '0')
			sum += str[i] - '0';
	}
	return sum;
}

int main() {
	printf("%i\n", compute(2, 1000));
	return 0;
}
