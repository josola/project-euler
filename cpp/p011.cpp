/* 
 * Project Euler
 * Problem 11 - Largest product in a grid
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using std::accumulate;
using std::cin;
using std::cout;
using std::endl;
using std::max_element;
using std::multiplies;
using std::vector;

int main()
{
    // ----- global variables
    int height = 0;
    int *width = &height;
    vector<vector<int>> grid;
    vector<vector<int>> current_grid;
    vector<int> products;
    int highest_product = 0;
    // -----

    // ----- Get grid as standard input.
    // Grid height is input limit.
    cout << "Grid height:\n";
    cin >> height;

    cout << "Grid input:" << endl;

    for (int i = 0; i < height; i++)
    {
        vector<int> row;
        for (int j = 0; j < *width; j++)
        {
            int hold = 0;
            cin >> hold;
            row.push_back(hold);
        }
        grid.push_back(row);
    }
    // -----

    cout << '\n';

    // ----- Track highest product in all orientations within grid.
    for (int i = 0; i <= height - 4; i++)
    {
        for (int j = 0; j <= *width - 4; j++)
        {
            // ---- Highest horizontal product.
            for (int k = 0; k < 4; k++)
            {
                vector<int> row;
                for (int l = 0; l < 4; l++)
                {
                    row.push_back(grid[k + i][l + j]);
                }
                current_grid.push_back(row);
            }

            for (int i = 0; i < 4; i++)
            {
                int horizontal_product = accumulate(current_grid[i].begin(), current_grid[i].end(), 1, multiplies<int>());
                products.push_back(horizontal_product);
            }
            // -----

            // ----- Highest vertical product.
            for (int i = 0; i < 4; i++)
            {
                int vertical_product = 1;

                for (int j = 0; j < 4; j++)
                {
                    vertical_product *= current_grid[j][i];
                }

                products.push_back(vertical_product);
            }
            // -----

            // ----- Highest diagonal products.
            unsigned long int diagonal_a_product = 1;

            for (int i = 0; i < 4; i++)
            {
                diagonal_a_product *= current_grid[i][i];
            }

            products.push_back(diagonal_a_product);

            unsigned long int diagonal_b_product = 1;

            int pos = 0;
            for (int i = 4 - 1; i >= 0; i--)
            {
                diagonal_b_product *= current_grid[i][pos];
                pos++;
            }

            products.push_back(diagonal_b_product);
            // -----

            // Clean up current grid for next iteration.
            current_grid.erase(current_grid.begin(), current_grid.end());
        }
    }
    // -----

    // Highest product within all orientations is the goal.
    highest_product = *max_element(products.begin(), products.end());

    cout << "Product = " << highest_product << endl;

    return 0;
}