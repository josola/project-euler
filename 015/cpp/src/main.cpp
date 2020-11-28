//
// main.cpp
// Project Euler Problem 15
//
// Starting in the top left corner of a 20x20 grid, and only
// being able to move to the right and down, how many routes
// are contained within the grid?

#include <iostream>

using std::cout;

int main()
{
    // We need to count the edges of the grid.
    // A width of 20 sqaures contains 21 edges.
    // A height of 20 squares contains 21 edges.

    const int width = 21;
    const int height = 21;

    // We start with an empty grid (full of zeros).

    long int grid[width][height] = {};

    // The first row and first column only have 1 path into
    // each square.

    for (int i = 0; i < width; i++)
    {
        grid[0][i] = 1;
    }

    for (int i = 0; i < height; i++)
    {
        grid[i][0] = 1;
    }

    // Move only to the right and down in the grid.

    for (int i = 1; i < height; i++)
    {
        for (int j = 1; j < width; j++)
        {
            grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
        }
    }

    // Arrays start at zero, the bottom right corner
    // index needs to be one less than the width and height.

    long int path_count = grid[width - 1][height - 1];

    // Done.

    cout << path_count << '\n';

    return 0;
}
