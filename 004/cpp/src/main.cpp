//
// main.cpp
// Project Euler - Problem 4
//
// Jordan Sola 2020 - MIT License

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    unsigned int palindrome = 0;

    for (int i = 100; i < 999; i++)
    {
        for (int j = 100; j < 999; j++)
        {
            // Numbers that end with zero cannot be palindromes.
            if ((i * j) % 10 != 0)
            {
                unsigned int product = i * j;
                unsigned int temp_product = product;
                unsigned int reverse = 0;

                // Digits need to be removed from number
                // that is being reversed.
                while (temp_product != 0)
                {
                    reverse = reverse * 10 + temp_product % 10;
                    temp_product /= 10;
                }

                // Track current largest. Iteration limit
                // will determine stopping point.
                if ((reverse == product) && (reverse > palindrome))
                {
                    palindrome = product;
                }
            }
        }
    }

    cout << palindrome << endl;

    return 0;
}