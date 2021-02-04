/* main.cpp
 * Project Euler
 * Problem 2 - Even Fibonacci numbers
 * Solution - v001 */

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int term_a = 0;
    int term_b = 1;
    int next_term;

    int total = 0;
    const int limit = 4000000;

    while (total < limit)
    {
        next_term = term_a + term_b;

        term_a = term_b;
        term_b = next_term;

        // Only even Fibonacci numbers are tracked.
        if (next_term % 2 == 0)
        {
            total += next_term;
        }
        else
        {
            continue;
        }
    }

    cout << total << endl;

    return 0;
}