//
// main.cpp
// Project Euler - Problem 2
//
// Jordan Sola 2020 - MIT License

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int next_term;
    int term1 = 0;
    int term2 = 1;
    int total = 0;
    const int limit = 4000000;

    while (total < limit)
    {
        next_term = term1 + term2;

        term1 = term2;
        term2 = next_term;

        // Only even Fibonacci numbers get tracked.
        if (next_term % 2 == 0)
        {
            total += next_term;
        }
    }

    cout << total << endl;

    return 0;
}