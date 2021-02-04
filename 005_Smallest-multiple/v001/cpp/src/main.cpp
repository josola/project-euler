/* main.cpp
 * Project Euler
 * Problem 5 - Smallest multiple
 * Solution - v001 */

#include <iostream>

using std::cout;
using std::endl;

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

   cout << minimum << " is the smallest number that can be divided evenly from 1 to 20" << endl;

    return 0;
}