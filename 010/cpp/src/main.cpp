//
// main.cpp
// Project Euler - Problem 10
//
// Jordan Sola 2020 - MIT License

#include <stdio.h>
#include "prime.h"

int main()
{
    int max = 2000000;

    unsigned long int prime_sum = 0;

    for (int i = 1; i < max; i++)
    {
        if (IsPrime(i))
        {
            prime_sum += i;
        }
    }

    printf("Summation of primes below %d: %lu\n", max, prime_sum);

    return 0;
}