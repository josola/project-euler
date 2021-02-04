/* main.cpp
 * Project Euler
 * Problem 14 - Longest Collatz sequence */

#include <iostream>
#include "collatz.h"

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
