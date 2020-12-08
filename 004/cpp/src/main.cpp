//
// main.cpp
// Project Euler - Problem 4
//
// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//
// Find the largest palindrome made from the product of two 3-digit numbers.
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
            if ((i * j) % 10 != 0)
            {
                unsigned int product = i * j;
                unsigned int temp_product = product;
                unsigned int reverse = 0;

                while (temp_product != 0)
                {
                    reverse = reverse * 10 + temp_product % 10;
                    temp_product /= 10;
                }

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