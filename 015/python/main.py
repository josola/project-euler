#
# main.py
# Project Euler - Problem 15
#
# Jordan Sola 2020 - MIT License

# ----- global variables ----- #

rows = []
grid = []

size = 21

total_paths = 0

# ----- build grid ----- #

for i in range(size):

    row = []

    for j in range(size):

        row.append(0)

    grid.append(row)

# ----- set ones in top row and first column ----- #

for i in range(len(grid[0])):
    grid[0][i] = 1

for i in grid:
    i[0] = 1

# ----- calculate grid points ----- #

for i in range(size):
    for j in range(len(grid[i])):
        if i == 0:
            break
        elif j == 0:
            continue
        else:
            grid[i][j] = grid[i][j - 1] + grid[i - 1][j]

total_paths += grid[size - 1][size - 1]

# ----- done ----- #

print(total_paths)
