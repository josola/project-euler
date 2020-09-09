/*
main.c
project euler problem #2
Jordan Sola 2020
*/

#include <stdio.h>

int main()
{
    unsigned long int next_term;
    unsigned long int term1 = 0;
    unsigned long int term2 = 1;
    unsigned long int total = 0;
    while (total < 4000000)
    {
        next_term = term1 + term2;
        term1 = term2;
        term2 = next_term;
        if ((next_term & 1) == 0)
        {
            total += next_term;
        }
    }
    printf("%lu\n", total);
    return 0;
}