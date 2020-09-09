/*
main.c
euler problem #3
Jordan Sola 2020
*/

#include <stdio.h>

int main()
{
    long long unsigned int n = 600851475143;
    long long unsigned int i = 2;
    for (; i < n; i++)
    {
        if (n % i == 0)
        {
            n /= i;
        }
    }
    printf("%llu\n", n);
    return 0;
}