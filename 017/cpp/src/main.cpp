//
// main.cpp
// Project Euler - Problem 17
//
// Jordan Sola 2020 - MIT License

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

const string empty = "";

const string ones[] = {empty, "One", "Two", "Three", "Four", "Five",
                    "Six", "Seven", "Eight", "Nine", "Ten",
                    "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen",
                    "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

const string tens[] = {empty, empty, "Twenty", "Thirty", "Forty", "Fifty",
                    "Sixty", "Seventy", "Eighty", "Ninety"};

string hundred = "Hundred";
string thousand = "Thousand";
string million = "Million";
string billion = "Billion";

string ConvertTwoDigit(int num)
{
    if (num == 0)
    {
        return empty;
    }
    else if (num > 19)
    {
        return tens[num / 10] + ones[num % 10];
    }
    else
    {
        return ones[num];
    }
}

string Num2Word(unsigned long long int num, string suffix)
{

}

int main()
{
    unsigned long long int max = 1000;

    for (int i = 1; i < max + 1; i++)
    {
        cout << ConvertTwoDigit(i) << endl;
    }

    return 0;
}