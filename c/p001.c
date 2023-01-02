#include "stdio.h"

int compute(const int LIMIT) {
	int a[3] = {3, 5, -15};
	int n[3] = {((LIMIT - 1) / a[0]), ((LIMIT - 1) / a[1]), ((LIMIT - 1) / a[2])};
	int n_plus[3] = {1, 1, -1};
	int sum = 0;
	for (int i = 0; i < 3; i++)
		sum += a[i] * (n[i] * (n[i] + n_plus[i]) / 2);
	return sum;
}

int main() {
	printf("%i\n", compute(1000));
	return 0;
}
