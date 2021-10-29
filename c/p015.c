/* 
 * Project Euler
 * Problem 15 - Lattice paths
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021
 */

#include "stdio.h"

long int compute(const int width, const int height)
{
	/*
	 * - We are counting the number of paths that live on
	 *   the edge of each cell in the grid,  so we need to
	 *   add one element to each row and column.
	 */
	long int grid[height + 1][width + 1];
	/*
	 * - In a grid setting, each cell has as many paths
	 *   through it as the sum of the cell directly above
	 *   it and the cell directly behind it.
	 */
	for (int i = 0; i < width + 1; i++)
		grid[0][i] = 1;
	for (int i = 0; i < height + 1; i++)
		grid[i][0] = 1;
	for (int i = 1; i < height + 1; i++)
		for (int j = 1; j < width + 1; j++)
			grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
	long int path_count = grid[height][width];
	return path_count;
}

int main()
{
	printf("%li\n", compute(20, 20));
	return 0;
}

// Answer: 137846528820

// Asymptotic complexity: O(N)
// M1 (3.2 GHz CPU) ARMv8-A64 (64 bit):
