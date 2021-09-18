/* main.cpp
 * Project Euler
 * Problem 10 - Summation of primes
 * Solution - v001 */

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    // ----- global variables
    int max = 2000000;
    long int sum = 0;
    // -----

    for (int i = 1; i < max; i++)
    {
        if (IsPrime(i))
        {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}

bool IsPrime(int num)
{
    // Zero and one cannot be prime.
    if (num == 0 || num == 1)
    {
        return false;
    }
  
    // Numbers that divide cleanly cannot be prime.
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    
    return true;
}