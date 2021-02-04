/* triangular_generator.cpp
 * Project Euler
 * Problem 12 - Highly divisible triangular number */

#include "triangular_generator.h"

int TriangularGenerator(int position)
{
    int triangular_number = 0;

    for (int i = 0; i < position; i++)
    {
        triangular_number += i;
    }

    return triangular_number;
}
