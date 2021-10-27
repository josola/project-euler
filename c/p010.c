/* 
 * Project Euler
 * Problem 10 - Summation of primes
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021
 */

#include "stdio.h"
#include "stdbool.h"

long long int compute(const int limit)
{
    /*
	 * - Uses Sieve of Eratosthenes to eliminate composite
	 *   numbers up to the limit.
	 * - The sieve tracks previously marked primes without increasing
	 *   the computation time unnecessarily. This allows the sieve to
	 *   jump ahead to the square of the current prime and
	 *   remove all the factors of the current prime.
	 */
    bool prime[limit];
    for (int i = 0; i < limit; i++)
        prime[i] = true;
    for (long int i = 2; i * i <= limit; i++)
    {
        if (prime[i] == true)
        {
            for (long long int j = i * i; j <= limit; j += i)
                prime[j] = false;
        }
    }
    long long int sum = 0;
    for (int i = 2; i <= limit; i++)
    {
        if (prime[i] == true)
            sum += i;
    }
    return sum;
}

int main()
{
    printf("%lli\n", compute(2000000));
    return 0;
}

// Answer: 142913828922

// Asymptotic complexity:
// M1 (3.2 GHz CPU) ARMv8-A64 (64 bit):
