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

    return 0;
}