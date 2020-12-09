//
// main.cpp
// Project Euler - Problem 16
//
// Jordan Sola 2020 - MIT License

#include <iostream>
#include <cmath>
#include <string>

using std::cout;
using std::pow;
using std::string;
using std::to_string;

int main()
{
    int base = 2;
    int exponent = 1000;

    double result_doub = pow(base, exponent);
    unsigned long long int result = result_doub;

    string num_to_word = to_string(result);
    size_t word_size = num_to_word.size();

    char num_arr[word_size] = {};

    for (int i = 0; i < word_size; i++)
    {
        num_arr[i] = num_to_word[i];
    }

    unsigned long long sum_of_result = 0;

    for (const int &num : num_arr)
    {
        sum_of_result += num;
    }

    return 0;
}