/* main.cpp
 * Project Euler
 * Problem 1 - Multiples of 3 and 5
 * Solution - v001 */

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    // Factor count customization.
    vector<int> factors = { 3, 5 };

    const int limit = 1000;
    int sum = 0;

    for (int i = 1; i < limit; i++)
    {
        for (int factor : factors)
        {
            if (i % factor == 0)
            {
                sum += i;

                // Counts multiple factors if
                // you don't break out here.
                break;
            }
            else
            {
                continue;
            }
        }
    }

    cout << sum << endl;

    return 0;
}