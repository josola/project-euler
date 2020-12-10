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