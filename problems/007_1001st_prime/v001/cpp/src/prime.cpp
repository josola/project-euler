/* prime.cpp
 * Project Euler
 * Problem 7 - 10001st prime */

#include "prime.h"

int IsPrime(int n)
{
    // Can't be prime, no need to calculate.
    if (n <= 1)
    {
        return 0;
    }

    // Positive divisors halt execution, number is not prime.
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    
    return 1;
}