//
// main.cpp
// Project Euler Problem 1
//
// Jordan Sola 2020 - MIT License

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int total = 0;

    // Finds the sum of multiples from 3 or 5.
    for (int i = 0; i < 1000; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            total += i;
        }
    }

    cout << total << endl;

    return 0;
}