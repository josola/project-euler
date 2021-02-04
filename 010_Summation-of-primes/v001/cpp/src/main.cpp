/* main.cpp
 * Project Euler
 * Problem 10 - Summation of primes
 * Solution - v001 */

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