/* 
 * Project Euler
 * Problem 18 - Maximum path sum I
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021
 */

#include "stdio.h"

int compute() {
	const int size = 15;
	int set[size][size] = { {75},
							{95, 64} ,
							{17, 47, 82},
							{18, 35, 87, 10},
							{20,  4, 82, 47, 65},
							{19,  1, 23, 75,  3, 34},
							{88,  2, 77, 73,  7, 63, 67},
							{99, 65,  4, 28,  6, 16, 70, 92},
							{41, 41, 26, 56, 83, 40, 80, 70, 33},
							{41, 48, 72, 33, 47, 32, 37, 16, 94, 29},
							{53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14},
							{70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57},
							{91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48},
							{63, 66,  4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31},
							{ 4, 62, 98, 27, 23,  9, 70, 98, 73, 93, 38, 53, 60,  4, 23} };

	/*
	 * - Adding the maximum value from the adjacent leafs in a
	 *   tree, leading up to the root of the tree, gives us the
	 *   absolute max sum from all paths at the root node.
	 */
	for (int row = size - 1; row >= 0; row--) {
		for (int col = 0; col < row; col++) {
			int max = 0;
			if (set[row][col] > set[row][col + 1]) {
				max = set[row][col];
			}
			else {
				max = set[row][col + 1];
			}
			set[row - 1][col] += max;
		}
	}
	int largest_path = set[0][0];
	return largest_path;
}

int main() {
	printf("%i\n", compute());
	return 0;
}

// Answer: 1074

// Asymptotic complexity: O(N)