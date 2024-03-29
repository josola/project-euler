#include "math.h"
#include "stdbool.h"
#include "stdio.h"

int compute(const int TARGET) {
	int a = 0;
	int b = 0;
	int c = 0;
	bool found = 0;
	for (a = 1; a < TARGET; a++) {
		for (b = a; b < TARGET; b++) {
			c = TARGET - a - b;
			int first = pow(a, 2);
			int second = pow(b, 2);
			int third = pow(c, 2);
			if (first + second == third) {
				found = true;
				break;
			}
		}
		if (found)
			break;
	}
	int product = a * b * c;
	return product;
}

int main() {
	printf("%i\n", compute(1000));
	return 0;
}
