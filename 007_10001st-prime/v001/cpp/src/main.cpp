/* main.cpp
 * Project Euler
 * Problem 7 - 10001st prime
 * Solution - v001 */

#include <iostream>
#include "prime.h"

using std::cout;
using std::endl;

int main()
{
    // ----- global veriables
    int target_prime = 0;
    int prime_count = 0;
    // -----

    while (prime_count != 10001)
    {
        // Current iteration.
        target_prime++;

        if (IsPrime(target_prime))
        {
            prime_count++;
        }

        cout << prime_count << ' ' << target_prime << endl;
    }

    return 0;
}