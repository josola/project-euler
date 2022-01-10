/* Project Euler
   Problem 15 - Lattice paths
   (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
   Written by Jordan Sola 2021 */

#include "stdio.h"

long int compute(const int WIDTH, const int HEIGHT) {
	
	/* - We are counting the number of paths that live on
	     the edge of each cell in the grid,  so we need to
	     add one element to each row and column. */
	
	long int grid[HEIGHT + 1][WIDTH + 1];
	
	/* - In a grid setting, each cell has as many paths
	     through it as the sum of the cell directly above
	     it and the cell directly behind it. */
	
	for (int i = 0; i < WIDTH + 1; i++)
		grid[0][i] = 1;
		
	for (int i = 0; i < HEIGHT + 1; i++)
		grid[i][0] = 1;
		
	for (int i = 1; i < HEIGHT + 1; i++)
		for (int j = 1; j < WIDTH + 1; j++)
			grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
	
	long int path_count = grid[HEIGHT][WIDTH];
	
	return path_count;
	
}

int main() {
	printf("%li\n", compute(20, 20));
	return 0;
}

/* Answer: 137,846,528,820
   Asymptotic complexity: O(N) */
