#include "collatz.h"

long int Collatz(long int n)
{
    if (n % 2 == 0)
    {
        n = n / 2;
    }
    else
    {
        // After an odd number runs through the vanilla
        // '3n + 1' statement it becomes an even number.
        // So you can automatically divide that result by
        // 2 to eliminate another loop.
        //
        n = (3 * n + 1)/2;
    }
    return n;
}