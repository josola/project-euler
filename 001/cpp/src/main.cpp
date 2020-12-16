//
// main.cpp
// Project Euler - Problem 1
//
// Jordan Sola 2020 - MIT License

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int limit = 1000;
    int sum = 0;

    // ----- multiples
    int a = 3;
    int b = 5;
    // -----

    for (int i = 0; i < limit; i++)
    {
        if ((i % a == 0) || (i % b == 0))
        {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}