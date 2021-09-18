# main.py
# Project Euler
# Problem 15 - Lattice paths
# Algorithm - v001

# ----- global variables
rows = []
grid = []
size = 21
total_paths = 0
# -----

# Start with a grid full of zeros.
for i in range(size):

    row = []

    for j in range(size):

        row.append(0)

    grid.append(row)


# LT column and top row need to be ones.
for i in range(len(grid[0])):
    grid[0][i] = 1

for i in grid:
    i[0] = 1

# This gets us the number of routes into each grid point.
for i in range(size):
    for j in range(len(grid[i])):
        if i == 0:
            break
        elif j == 0:
            continue
        else:
            grid[i][j] = grid[i][j - 1] + grid[i - 1][j]

# Bottom RT corner of grid contains the most routes.
total_paths += grid[size - 1][size - 1]

print(total_paths)
