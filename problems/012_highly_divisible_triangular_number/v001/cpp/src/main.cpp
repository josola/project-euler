/* main.cpp
 * Project Euler
 * Problem 12 - Highly divisible triangular number
 * Solution - v001 */

#include "divisor_count.h"
#include "triangular_generator.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    // ----- global variables
    int number = 1;
    int i = 1;
    // -----
    
    while (DivisorCount(number) < 500) {
        number = TriangularGenerator(i);
        i++;
    }
    
    cout << number << endl;
    
    return 0;
}
