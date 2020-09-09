/*
main.c
project euler #4
Jordan Sola 2020
*/

#include <stdio.h>

int main()
{
    int palindrome = 0;

    for (int i = 100; i < 999; i++)
    {
        for (int j = 100; j < 999; j++)
        {
            if ((i * j) % 10 != 0)
            {
                int product = i * j;
                int temp_product = product;
                int reverse = 0;

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

    printf("%d\n", palindrome);

    return 0;
}