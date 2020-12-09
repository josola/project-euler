//
// main.cpp
// Project Euler Problem 2
//
// Jordan Sola 2020 - MIT License

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    unsigned int next_term;

    unsigned int term1 = 0;
    unsigned int term2 = 1;

    unsigned int total = 0;

    const unsigned int limit = 4000000;

    while (total < limit)
    {
        next_term = term1 + term2;

        term1 = term2;
        term2 = next_term;

        if (next_term % 2 == 0)
        {
            total += next_term;
        }
    }

    cout << total << endl;

    return 0;
}