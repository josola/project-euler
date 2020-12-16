//
// main.cpp
// Project Euler - Problem 3
//
// Jordan Sola 2020 - MIT License

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    long long int num = 600851475143;

    for (long int i = 2; i < num; i++)
    {
        // Smaller factors are eliminated, making num prime.
        if (num % i == 0)
        {
            num /= i;
        }
    }

    cout << num << endl;

    return 0;
}