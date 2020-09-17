/*
main.c
project euler 10
Jordan Sola 2020
*/

#include <stdio.h>
#include "prime.h"

int main()
{
    // prime number ceiling
    int max = 2000000;

    // summation of primes below ceiling
    unsigned long int prime_sum = 0;

    for (int i = 1; i < max; i++)
    {
        // check every number between 1 and max for prime
        if (IsPrime(i))
        {
            prime_sum += i;
        }
    }

    printf("Summation of primes below %d: %lu\n", max, prime_sum);

    return 0;
}