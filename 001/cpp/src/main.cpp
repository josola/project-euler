//
// main.cpp
// Project Euler Problem 1
//
// If we list all the natural numbers below 10 that are
// multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of
// these multiples is 23.
//
// Find the sum of all the multiples of 3 or 5 below 1000.
//
// Jordan Sola 2020 - MIT License

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int total = 0;

    // Finds the sum of multiples from 3 or 5.
    for (int i = 0; i < 1000; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            total += i;
        }
    }

    cout << total << endl;

    return 0;
}