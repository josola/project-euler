//
// main.cpp
// Project Euler Problem 3
//
// The prime factors of 13195 are 5, 7, 13 and 29.
//
// What is the largest prime factor of the number 600851475143?
//
// Jordan Sola 2020 - MIT License

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    long long unsigned int num = 600851475143;

    for (long unsigned int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            num /= i;
        }
    }

    cout << num << endl;

    return 0;
}