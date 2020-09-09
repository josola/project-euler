/*
main.c
project euler #4
Jordan Sola 2020
*/

#include <stdio.h>
#include <stdbool.h>

int ReverseNumber(int number)
{
    int reversed_number = 0;
    while (number > 0)
    {
        reversed_number = reversed_number * 10 + number % 10;
        number = number / 10;
    }
    return reversed_number;
}

bool CheckPalindrome(int original, int reversed)
{
    if (original == reversed)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int product = 0;
    int reversed_number = 0;

    bool found = false;
    int x = 999;
    int y = 999;
    int minimum = 100;

    while (!found)
    {
        product = x * y;
        reversed_number = ReverseNumber(product);
        
        if (reversed_number == product)
        {
            found = true;
            printf("%s%d\n", "Max palindrome = ", product);
            printf("%s%d%s%d", "From: ", x, " * ", y);
        }
        else if (x == minimum && y == minimum)
        {
            printf("No palindrome found...");
            break;
        }
        else if (y == minimum)
        {
            x--;
            y = x - 1;
        }
        else
        {
            y--;
        }
    }

    return 0;
}