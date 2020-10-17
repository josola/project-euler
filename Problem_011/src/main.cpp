/*
Find the greatest product within four numbers in all directions within a grid of any even size.
Jordan Sola 2020 - MIT License
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using std::cin;
using std::cout;
using std::vector;
using std::max_element;
using std::accumulate;
using std::multiplies;

int main()
{
    bool program_running = true;
    while (program_running)
    {
        // Humans need friendly interactions with computer programs.
        cout << "Welcome\n"
             << '\n'
             << "This program calculates the highest product\n"
             << "within four adjacent numbers in any even sized\n"
             << "grid with a minimum highet and width of four units.\n"
             << '\n'
             << "Would you like to continue?\n"
             << "1 - Yes, continue.\n"
             << "0 - No, exit.\n"
             << '\n'
             << "Please enter your choice:\n";

        bool choice;
        cin >> choice;

        if (choice)
        {
            if (cin.fail())
            {
                cin.clear();
            }
            cout << '\n';
        }
        else
        {
            program_running = false;
            cout << "You have chosen to exit this program. Goodbye.\n";
            return 0;
        }

        int height = 0;
        bool even_height = false;
        while (!even_height)
        {
            cout << "Please enter the height of your grid:\n";

            cin >> height;

            if (height >= 4 && (height % 4 == 0))
            {
                cout << '\n';
                even_height = true;
            }
            else
            {
                cout << "The height of your grid must be\n"
                     << "four or above and must be evenly\n"
                     << "divisible by four.\n"
                     << '\n';
                even_height = false;
            }
        }

        // Grid needs to be given by user.

        cout << "Please input your grid.\n"
             << '\n'
             << "Input:\n";

        int width = height;

        vector<vector<int> > container;

        for (int i = 0; i < height; i++)
        {
            vector<int> row;
            for (int j = 0; j < width; j++)
            {
                int hold = 0;
                cin >> hold;
                row.push_back(hold);
            }
            container.push_back(row);
        }

        cout << '\n';

        // Calculate largest product within provided grid.

        vector<vector<int> > current_grid;

        vector<int> products;

        for (int i = 0; i <= height - 4; i++)
        {
            for (int j = 0; j <= width - 4; j++)
            {
                // Get four by four grid for calculation

                for (int k = 0; k < 4; k++)
                {
                    vector<int> row;
                    for (int l = 0; l < 4; l++)
                    {
                        row.push_back(container[k + i][l + j]);
                    }
                    current_grid.push_back(row);
                }

                // Make calculations on grid.

                // Horizontal product within current grid.
                for (int i = 0; i < 4; i++)
                {
                    int horizontal_product = accumulate(current_grid[i].begin(), current_grid[i].end(), 1, multiplies<int>());
                    products.push_back(horizontal_product);
                }

                // Vertical product within current grid.
                for (int i = 0; i < 4; i++)
                {
                    int vertical_product = 1;

                    for (int j = 0; j < 4; j++)
                    {
                        vertical_product *= current_grid[j][i];
                    }

                    products.push_back(vertical_product);
                }

                // Diagonal product within grid.

                // Diagonal A
                unsigned long int diagonal_a_product = 1;

                for (int i = 0; i < 4; i++)
                {
                    diagonal_a_product *= current_grid[i][i];
                }

                products.push_back(diagonal_a_product);

                // Diagonal B
                unsigned long int diagonal_b_product = 1;

                int pos = 0;
                for (int i = 4 - 1; i >= 0; i--)
                {
                    diagonal_b_product *= current_grid[i][pos];
                    pos++;
                }

                products.push_back(diagonal_b_product);

                current_grid.erase(current_grid.begin(), current_grid.end());
            }
        }

        int highest_product = *max_element(products.begin(), products.end());

        cout << "The highest product within four\n"
             << "adjacent numbers within your gird.\n"
             << '\n'
             << "Product = "
             << highest_product << '\n'
             << '\n'
             << "Would you like to process another grid?\n"
             << "1 - Yes, again.\n"
             << "0 - No, exit program.\n"
             << '\n'
             << "Please input your choice:\n";

        cin >> choice;

        if (choice)
        {
            cout << '\n';
            program_running = true;
        }
        else
        {
            program_running = false;
            cout << '\n'
                 << "You have chosen to exit this program. Goodbye.\n";
        }
    }

    return 0;
}