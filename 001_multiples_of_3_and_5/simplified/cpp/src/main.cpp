/* main.c
 * Project Euler
 * Problem 1 - Multiples of 3 and 5
 * Solution - v001 */

#include "stdio.h"

int main()
{
    const int limit = 1000;
    int sum = 0;

    for (int i = 1; i < limit; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}