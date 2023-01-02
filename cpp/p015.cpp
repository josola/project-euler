#include <iostream>

long int compute(const int WIDTH, const int HEIGHT) {
	long int grid[HEIGHT + 1][WIDTH + 1];
	for (int i = 0; i < WIDTH + 1; i++)
		grid[0][i] = 1;
	for (int i = 0; i < HEIGHT + 1; i++)
		grid[i][0] = 1;
	for (int i = 1; i < HEIGHT + 1; i++) {
		for (int j = 1; j < WIDTH + 1; j++)
			grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
	}
	long int path_count = grid[HEIGHT][WIDTH];
	return path_count;
}

int main() {
	std::cout << compute(20, 20) << std::endl;
	return 0;
}
