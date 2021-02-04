/* prime.cpp
 * Project Euler
 * Problem 10 - Summation of primes */

#include "prime.h"

bool IsPrime(int num)
{
    // Zero and one cannot be prime.
    if (num == 0 || num == 1)
    {
        return false;
    }
  
    // Numbers that divide cleanly cannot be prime.
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    
    return true;
}