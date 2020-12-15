//
// main.cpp
// Project Euler - Problem 7
//
// Jordan Sola 2020 - MIT License

#include <stdio.h>
#include "prime.h"

int main()
{
    // ----- global veriables
    int target_prime = 0;
    int prime_count = 0;
    // -----

    while (prime_count != 10001)
    {
        // Current iteration.
        target_prime++;

        if (IsPrime(target_prime))
        {
            prime_count++;
        }

        printf("%d %d\n", prime_count, target_prime);
    }

    return 0;
}