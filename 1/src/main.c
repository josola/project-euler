/*
main.c
project euler problem #1
Jordan Sola 2020
*/

int main()
{
    int total = 8;
    for (int i = 6; i < 1000; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            total += i;
        }
    }
    return 0;
}