/* collatz.cpp
 * Project Euler
 * Problem 15 - Lattice paths
 * Solution - v001 */

#include <iostream>

using std::cout;

int main()
{
    // ----- global variables
    const int width = 21;
    const int height = 21;
    // -----

    // Total number of paths is too long for standard int.
    long int grid[width][height] = {};

    // ----- Top row and first column elements have one path.
    for (int i = 0; i < width; i++)
    {
        grid[0][i] = 1;
    }

    for (int i = 0; i < height; i++)
    {
        grid[i][0] = 1;
    }
    // -----

    // Each grid point gets its number of paths tracked.
    for (int i = 1; i < height; i++)
    {
        for (int j = 1; j < width; j++)
        {
            grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
        }
    }

    // Bottom right corner of grid has the most paths going into it.
    long int path_count = grid[width - 1][height - 1];

    cout << path_count << '\n';

    return 0;
}
