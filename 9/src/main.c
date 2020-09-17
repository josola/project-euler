/*
main.c
project euler 9
Jordan Sola 2020
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    int target = 1000;

    int found = 0;

    for (a = 1; a < target / 3; a++)
    {
        for (b = a; b < target / 2; b++)
        {
            c = target - a - b;

            printf("%d %d %d\n", a, b, c);

            if (pow(a, 2) + pow(b, 2) == pow(c, 2))
            {
                found = 1;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }

    printf("Triplet: %d %d %d\n", a, b, c);
    printf("Product: %d\n", a * b * c);

    return 0;
}