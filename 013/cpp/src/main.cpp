//
// main.cpp
// Project Euler - Problem 13
//
// Jordan Sola 2020 - MIT License

#include <iostream>
#include <vector>
#include <gmpxx.h>

using std::cin;
using std::cout;
using std::vector;

int main()
{
    vector<mpz_class> long_numbers;
    
    for (int i = 0; i < 100; i++)
    {
        mpz_class num;

        cin >> num;

        long_numbers.push_back(num);
    }

    mpz_class sum;

    for (int i = 0; i < long_numbers.size(); i++)
    {
        sum += long_numbers[i];
    }

    cout << sum << '\n';

    return 0;
}