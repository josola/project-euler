// three-five-factor-count-test.c
//
// Tests if three and five have the same multiples.

#include "stdio.h"

int main()
{
    int multiples_of_three = 0;
    int multiples_of_five = 0;
    int multiples_of_three_and_five = 0;
    const int limit = 6000;

    // Finding multiples needs to be broken up into
    // individual loops to check each factor individuallly.

    // Get multiples of three.
    for (int i = 1; i < limit + 1; i++)
    {
        if (i % 3 == 0)
        {
            multiples_of_three++;
        }
        else
        {
            continue;
        }
    }

    // Get multiples of 5.
    for (int i = 1; i < limit + 1; i++)
    {
        if (i % 5 == 0)
        {
            multiples_of_five++;
        }
        else
        {
            continue;
        }
    }

    // Multiples of both 3 and 5.
    for (int i = 1; i < limit + 1; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            multiples_of_three_and_five++;
        }
        else
        {
            continue;
        }
    }

    // After doing all this stuff by hand, I discovered
    // you can determine the count of multiples by dividing each
    // factor by the total number of multiples you want to check.

    int multiple_division_three = limit / 3;
    int multiple_division_five = limit / 5;

    if (multiples_of_three == multiples_of_five && multiples_of_three == multiples_of_three_and_five)
    {
        printf("They have the same factors!\n");
        printf("Three's multiple count by hand: %d\n", multiples_of_three);
        printf("Five's multiple count by hand: %d\n", multiples_of_five);
        printf("Three's multiple count by division: %d\n", multiple_division_three);
        printf("Five's multiple count by division: %d\n", multiple_division_five);
    }
    else
    {
        printf("They don't have the same factors!\n");
        printf("Three's multiple count: %d\n", multiples_of_three);
        printf("Five's multiple count: %d\n", multiples_of_five);
        printf("Three's multiple count by division: %d\n", multiple_division_three);
        printf("Five's multiple count by division: %d\n", multiple_division_five);
    }
    
    return 0;
}