/* 
 * Project Euler
 * Problem 12 - Highly divisible triangular number
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <iostream>
#include <math.h>

using std::cout;
using std::endl;

int main()
{
    // ----- global variables
    int number = 1;
    int i = 1;
    // -----
    
    while (DivisorCount(number) < 500) {
        number = TriangularGenerator(i);
        i++;
    }
    
    cout << number << endl;
    
    return 0;
}

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

int TriangularGenerator(int position)
{
    int triangular_number = 0;

    for (int i = 0; i < position; i++)
    {
        triangular_number += i;
    }

    return triangular_number;
}
