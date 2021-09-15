/* problems/001_multiples_of_3_and_5/docs/src/equation-table.cpp
 * Prints the problems to be copied into the handmade documentation.
 * (c) 2020-2021 Jordan Sola
 * Written by Jordan Sola */

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    std::string check_mark = "\u2713";
    std::string cancel = "\u2718";
    std::string *output_symbol = NULL;

    const int limit = 1000;

    // Table header.
    std::cout << "| # | Divide by 3 | Divide by 5 | Multiple |" << std::endl;
    std::cout << "| :---: | :---: | :---: | :---: |" << std::endl;

    // Table contents.

    // Covers multiples [1-3].
    for (int i = 1; i < 3 + 1; i++)
    {
        if (3 % i == 0 || 5 % i == 0)
        {
            output_symbol = &check_mark;
        }
        else
        {
            output_symbol = &cancel;
        }

        if (3 % i == 0)
        {
            std::cout << "| " << i << " |" << " 3 / " << i << " = " << 3 / i << " |";
        }
        else
        {
            std::cout << std::setprecision(1) << std::fixed
                 << "| " << i << " |" << " 3 / " << i << " = " << 3.0 / (double)i << " |";
        }

        if (5 % i == 0)
        {
            std::cout << " 5 / " << i << " = " << 5 / i << " | " << *output_symbol << " |" << std::endl;
        }
        else
        {
            std::cout << std::setprecision(1) << std::fixed
                 << "5 / " << i << " = " << 5.0 / (double)i << " | " << *output_symbol << " |" << std::endl;
        }
    }

    // Clean out memory slot.
    output_symbol = NULL;

    // Covers multiples 4 and 5.
    for (int i = 4; i < 5 + 1; i++)
    {
        if (3 % i == 0 || 5 % i == 0)
        {
            output_symbol = &check_mark;
        }
        else
        {
            output_symbol = &cancel;
        }

        if (3 % i == 0)
        {
            std::cout << "| " << i << " | " << i << " / 3" << " = " << i / 3 << " |";
        }
        else
        {
            std::cout << std::setprecision(1) << std::fixed
                 << "| " << i << " | " << i << " / 3" << " = " << (double)i / 3.0 << " |";
        }

        if (5 % i == 0)
        {
            std::cout << " 5 / " << i << " = " << 5 / i << " | " << *output_symbol << " |" << std::endl;
        }
        else
        {
            std::cout << std::setprecision(1) << std::fixed
                 << " 5 / " << i << " = " << 5.0 / (double)i << " | " << *output_symbol << " |" << std::endl;
        }
    }

    // clean out memory slot.
    output_symbol = NULL;

    // Rest of the table.
    for (int i = 6; i < limit; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            output_symbol = &check_mark;
        }
        else
        {
            output_symbol = &cancel;
        }

        if (i % 3 == 0)
        {
            std::cout << "| " << i << " | " << i << " / 3 = " << i / 3;
        }
        else
        {
            std::cout << std::setprecision(1) << std::fixed
                 << "| " << i << " | " << i << " / 3 = " << (double)i / 3.0;
        }

        if (i % 5 == 0)
        {
            std::cout << " | " << i << " / 5 = " << i / 5 << " | " << *output_symbol << " |" << std::endl;
        }
        else
        {
            std::cout << std::setprecision(1) << std::fixed
                 << " | " << i << " / 5 = " << (double)i / 5.0 << " | " << *output_symbol << " |" << std::endl;
        }
    }

    return 0;
}