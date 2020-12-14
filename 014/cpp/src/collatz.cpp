//
// This is the Collatz formula. This formula should always
// end at one, no matter what number it starts at.

#include "collatz.h"

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