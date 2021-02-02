// problem_001.c
// Project Euler - Problem 1

#include "stdio.h"

int main()
{
    // Factor count customization.
    int factors[2] = { 3, 5 };

    // C doesn't allow const integers as array size.
    int size = sizeof(factors)/sizeof(*factors);

    const int limit = 1000;
    int sum = 0;

    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i % factors[j] == 0)
            {
                sum += i;

                // Counts multiple factors at once
                // if you don't break out here.
                break;
            }
            else
            {
                continue;
            }
        }
    }

    printf("%d", sum);

    return 0;
}