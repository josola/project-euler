//
// main.cpp
// Project Euler - Problem 14
//
// Jordan Sola 2020 - MIT License

#include <iostream>
#include "collatz.h"

using std::cout;

int main()
{
    long int n = 999168;

    int highest_term = 0;
    long int highest_start = 0;

    while (n != 1)
    {
        long int o = n;
        int terms = 0;

        while (o != 1)
        {
            o = Collatz(o);
            terms++;
        };

        if (terms >= highest_term)
        {
            highest_term = terms;
            highest_start = n;
        }
        n--;
    }
    cout << highest_term << '\n'
         << highest_start << '\n';
}
