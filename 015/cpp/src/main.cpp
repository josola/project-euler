//
// main.cpp
// Project Euler - Problem 15
//
// Jordan Sola 2020 - MIT License

#include <iostream>

using std::cout;

int main()
{
    const int width = 21;
    const int height = 21;

    long int grid[width][height] = {};

    for (int i = 0; i < width; i++)
    {
        grid[0][i] = 1;
    }

    for (int i = 0; i < height; i++)
    {
        grid[i][0] = 1;
    }

    for (int i = 1; i < height; i++)
    {
        for (int j = 1; j < width; j++)
        {
            grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
        }
    }

    long int path_count = grid[width - 1][height - 1];

    cout << path_count << '\n';

    return 0;
}
