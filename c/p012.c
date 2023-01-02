#include "stdio.h"
#include "math.h"

long int compute(const int TARGET) {
	int term = 1;
	long int triangular = 0;
	int div_count = 0;
	while (div_count < TARGET){
		term++;
		div_count = 0;
		triangular = term * (term + 1) / 2;
		int root = sqrt(triangular);
		for (int i = 1; i <= root + 1; i++){
			if (triangular % i == 0)
				div_count += 2;
		}
	}
	return triangular;
}

int main() {
	printf("%li\n", compute(500));
	return 0;
}
