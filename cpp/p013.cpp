/* main.cpp
 * Project Euler
 * Problem 13 - Large sum
 * Solution - v001 */

#include <iostream>
#include <vector>
#include <gmpxx.h>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    // Needs third party type that supports large numbers.

    // ----- global variables
    mpz_class sum;
    // -----

    // ----- Get set of large numbers from input.
    vector<mpz_class> long_numbers;

    for (int i = 0; i < 100; i++)
    {
        mpz_class num;

        cin >> num;

        long_numbers.push_back(num);
    }
    // -----

    // Sum comes from individual integers in long_numbers.
    for (int i = 0; i < long_numbers.size(); i++)
    {
        sum += long_numbers[i];
    }

    cout << sum << endl;

    return 0;
}