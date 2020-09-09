/*
main.c
project euler problem 007
Jordan Sola 2020
*/

#include <stdio.h>
#include "prime.h"

int main()
{
    int target_prime = 0;
    int prime_count = 0;

    while (prime_count < 100001)
    {
        target_prime++;
        if (IsPrime(target_prime) == 1)
        {
            prime_count++;
        }
    }

    printf("%d\n", target_prime);

    return 0;
}