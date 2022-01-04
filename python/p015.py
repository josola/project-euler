# Project Euler
# Problem 15 - Lattice paths
# (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
# Written by Jordan Sola 2020-2021

def compute(WIDTH, HEIGHT):
	
	# - We are counting the number of paths that live on
	#   the edge of each cell in the grid,  so we need to
	#   add one element to each row and column.
	
	grid = []
	columns = []
	
	for i in range(0, WIDTH + 1):
		columns.append(0)
	for i in range(0, HEIGHT + 1):
		grid.append(columns)
	
	# - In a grid setting, each cell has as many paths
	#   through it as the sum of the cell directly above
	#   it and the cell directly behind it.
	
	for i in range(0, WIDTH + 1):
		grid[0][i] = 1
	for i in range(0, HEIGHT + 1):
		grid[i][0] = 1
	
	for i in range(1, HEIGHT + 1):
		for j in range(1, WIDTH + 1):
			grid[i][j] = grid[i - 1][j] + grid[i][j - 1]
	
	path_count = grid[HEIGHT][WIDTH]
	
	return path_count

if __name__ == "__main__":
	print(compute(20, 20))

# Answer: 137846528820

# Asymptotic complexity: O(N)

# M1           (3.2 GHz CPU) ARMv8-A64 (64 bit): 5000 loops, best of 5: 42.1 usec per loop
# Ryzen 5 2600 (3.4 GHz CPU) x86-64 (64 bit): 5000 loops, best of 5: 76.7 usec per loop
