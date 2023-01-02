def compute(WIDTH, HEIGHT):
	grid = []
	columns = []
	for i in range(0, WIDTH + 1):
		columns.append(0)
	for i in range(0, HEIGHT + 1):
		grid.append(columns)
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
