//
// Finds the number of divisors in any given number.

#include "divisor_count.h"
#include <cmath>

using std::sqrt;

int DivisorCount(int number)
{
    int count = 0;
    // Halves number of calculations needed.
    int root = sqrt(number);

    // Divisors divide the original number cleanly.
    for (int i = 1; i <= root + 1; i++)
    {
        if (number % i == 0)
        {
            count += 2;
        }
    }

    return count;
}
