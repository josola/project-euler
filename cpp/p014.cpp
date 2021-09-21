/* 
 * Project Euler
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    // ----- global variables
    long int start = 999999;
    int highest_term = 0;
    long int highest_start = 0;
    // -----

    while (start != 1)
    {
        // Start is its own iterator, need a seperate iterator.
        long int current_term = start;
        int terms = 0;

        // Perform Collatz algorithm.
        while (current_term != 1)
        {
            current_term = Collatz(current_term);
            terms++;
        };

        // Highest term and start are the end goal.
        if (terms >= highest_term)
        {
            highest_term = terms;
            highest_start = start;
        }

        start--;
    }

    cout << highest_term << endl
         << highest_start << endl;
}

long int Collatz(long int n)
{
    if (n % 2 == 0)
    {
        n = n / 2;
    }
    else
    {
        n = (3 * n + 1)/2;
    }
    return n;
}