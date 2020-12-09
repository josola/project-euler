//
// main.cpp
// Project Euler - Problem 12
//
// Jordan Sola 2020 - MIT License

#include "divisor_count.h"
#include "triangular_generator.h"
#include <iostream>

using std::cout;

int main()
{
    int number = 1;
    int i = 1;
    
    while (DivisorCount(number) < 500) {
        number = TriangularGenerator(i);
        i++;
    }
    
    cout << number << '\n';
    
    return 0;
}
