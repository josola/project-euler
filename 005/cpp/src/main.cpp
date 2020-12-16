//
// main.cpp
// Project Euler - Problem 5
//
// Jordan Sola - MIT License

#include <stdio.h>

int main()
{
    // ----- global variables
    int minimum = 20;
    int n = 20;
    // -----

    while (n > 0)
    {
        if (minimum % n == 0)
        {
            n--;
        }
        else
        {
            minimum++;
            n = 20;
        }
    }

    printf("%d%s", minimum, " is the smallest number that can be divided evenly from 1 to 20");

    return 0;
}