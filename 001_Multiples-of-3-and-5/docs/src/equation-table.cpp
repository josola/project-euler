// equation-table.cpp
//
// Handmade Solutions - Project Euler Problem 1
// Prints the problems to be copied into the handmade documentation.

#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::string;

int main()
{
    string check_mark = "\u2713";
    string cancel = "\u2718";
    string *output_symbol = NULL;

    const int limit = 1000;

    // Table header.
    cout << "| # | Divide by 3 | Divide by 5 | Multiple |" << endl;
    cout << "| :---: | :---: | :---: | :---: |" << endl;

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
            cout << "| " << i << " |" << " 3 / " << i << " = " << 3 / i << " |";
        }
        else
        {
            cout << setprecision(1) << fixed
                 << "| " << i << " |" << " 3 / " << i << " = " << 3.0 / (double)i << " |";
        }

        if (5 % i == 0)
        {
            cout << " 5 / " << i << " = " << 5 / i << " | " << *output_symbol << " |" << endl;
        }
        else
        {
            cout << setprecision(1) << fixed
                 << "5 / " << i << " = " << 5.0 / (double)i << " | " << *output_symbol << " |" << endl;
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
            cout << "| " << i << " | " << i << " / 3" << " = " << i / 3 << " |";
        }
        else
        {
            cout << setprecision(1) << fixed
                 << "| " << i << " | " << i << " / 3" << " = " << (double)i / 3.0 << " |";
        }

        if (5 % i == 0)
        {
            cout << " 5 / " << i << " = " << 5 / i << " | " << *output_symbol << " |" << endl;
        }
        else
        {
            cout << setprecision(1) << fixed
                 << " 5 / " << i << " = " << 5.0 / (double)i << " | " << *output_symbol << " |" << endl;
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
            cout << "| " << i << " | " << i << " / 3 = " << i / 3;
        }
        else
        {
            cout << setprecision(1) << fixed
                 << "| " << i << " | " << i << " / 3 = " << (double)i / 3.0;
        }

        if (i % 5 == 0)
        {
            cout << " | " << i << " / 5 = " << i / 5 << " | " << *output_symbol << " |" << endl;
        }
        else
        {
            cout << setprecision(1) << fixed
                 << " | " << i << " / 5 = " << (double)i / 5.0 << " | " << *output_symbol << " |" << endl;
        }
    }

    return 0;
}