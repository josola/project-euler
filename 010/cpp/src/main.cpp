//
// main.cpp
// Project Euler - Problem 10
//
// Jordan Sola 2020 - MIT License

#include <iostream>
#include "prime.h"

using std::cout;
using std::endl;

int main()
{
    // ----- global variables
    int max = 2000000;
    long int sum = 0;
    // -----

    for (int i = 1; i < max; i++)
    {
        if (IsPrime(i))
        {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}