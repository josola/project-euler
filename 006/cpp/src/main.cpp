//
// main.cpp
// Project Euler - Problem 6
//
// Jordan Sola 2020 - MIT License

#include <stdio.h>

int main()
{
    // ----- global variables
    int limit = 100;
    // -----

    // ----- Sum of squares.
    int sum_of_squares = 0;
    for (int i = 1; i < limit + 1; i++)
    {
        sum_of_squares += i * i;
    }
    // -----

    // ----- Sum of naturals squared.
    int sum_of_naturals = 0;
    for (int i = 1; i < limit + 1; i++)
    {
        sum_of_naturals += i;
    }
    int naturals_squared = sum_of_naturals * sum_of_naturals;
    // -----

    int sum_of_naturals_and_squares = naturals_squared - sum_of_squares;

    printf("%d\n", sum_of_naturals_and_squares);

    return 0;
}