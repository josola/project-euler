//
// main.cpp
// Project Euler - Problem 9
//
// Jordan Sola 2020 - MIT License

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::pow;

int main()
{
    // ----- global variables
    int a = 0;
    int b = 0;
    int c = 0;
    int target = 1000;
    bool found = 0;
    // -----

    for (a = 1; a < target; a++)
    {
        for (b = a; b < target; b++)
        {
            // If you start c at the target, the triplet
            // will add up to the target.
            c = target - a - b;

            // ----- Makes current triplet easier to see.
            int first = pow(a, 2);
            int second = pow(b, 2);
            int third = pow(c, 2);
            // -----

            // Check for pythagorean triplet.
            if (first + second == third)
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }

    cout << "Triplet: " << a << ", " << b << ", " << c << endl; 
    cout << "Product: " << a * b * c << endl;

    return 0;
}