/* 
 * Project Euler
 * Problem 7 - 10001st prime
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <iostream>

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

int IsPrime(int n)
{
    // Can't be prime, no need to calculate.
    if (n <= 1)
    {
        return 0;
    }

    // Positive divisors halt execution, number is not prime.
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    
    return 1;
}