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