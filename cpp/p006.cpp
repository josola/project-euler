/* main.cpp
 * Project Euler
 * Problem 6 - Sum square difference
 * Solution - v001 */

#include <iostream>

using std::cout;
using std::endl;

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

     cout << sum_of_naturals_and_squares << endl;

    return 0;
}