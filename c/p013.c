/* Project Euler
   Problem 13 - Large sum
   (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
   Written by Jordan Sola 2021 */

#include "stdio.h"

long long int compute(long int numbers[], const int NUM_COUNT) {
	
	long long int sum = 0;
	for (long int i = 0; i < NUM_COUNT; i++)
		sum += numbers[i];
	
	sum /= 1000;
	
	return sum;
	
}

int main() {
	
	/* - Only the first ten digits of the sum are required.
	     Which cuts out any digit from the twelfth onward. */
	
	const int NUMBER_COUNT = 100;
	long int numbers[NUMBER_COUNT] = {37107287533, 46376937677, 74324986199, 91942213363, 23067588207,
									  89261670696, 28112879812, 44274228917, 47451445736, 70386486105,
									  62176457141, 64906352462, 92575867718, 58203565325, 80181199384,
									  35398664372, 86515506006, 71693888707, 54370070576, 53282654108,
									  36123272525, 45876576172, 17423706905, 81142660418, 51934325451,
									  62467221648, 15732444386, 55037687525, 18336384825, 80386287592,
									  78182833757, 16726320100, 48403098129, 87086987551, 59959406895,
									  69793950679, 41052684708, 65378607361, 35829035317, 94953759765,
									  88902802571, 25267680276, 36270218540, 24074486908, 91430288197,
									  34413065578, 23053081172, 11487696932, 63783299490, 67720186971,
									  95548255300, 76085327132, 37774242535, 23701913275, 29798860272,
									  18495701454, 38298203783, 34829543829, 40957953066, 29746152185,
									  41698116222, 62467957194, 23189706772, 86188088225, 11306739708,
									  82959174767, 97623331044, 42846280183, 55121603546, 32238195734,
									  75506164965, 62177842752, 32924185707, 99518671430, 73267460800,
									  76841822524, 97142617910, 87783646182, 10848802521, 71329612474,
									  62184073572, 66627891981, 60661826293, 85786944089, 66024396409,
									  64913982680, 16730939319, 94809377245, 78639167021, 15368713711,
									  40789923115, 44889911501, 41503128880, 81234880673, 82616570773,
									  22918802058, 77158542502, 72107838435, 20849603980, 53503534226};
	
	printf("%lli\n", compute(numbers, NUMBER_COUNT));
	
	return 0;
	
}

/* Answer: 76,576,500
   Asymptotic complexity: O(N) */
