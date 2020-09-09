/*
main.c
project euler problem #2
Jordan Sola 2020
*/

#include <stdio.h>

int main()
{
    int next_term;
    int term1 = 0;
    int term2 = 1;
    int total = 0;
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
    printf("%d\n", total);
    return 0;
}