// table-of-sums.cpp
//
// Generates a table showing the summation
// of all the multiples of 3 or 5.

#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::endl;

int main()
{
    // Get multiples of 3 or 5.
    const int limit = 999;
    vector<int> multiples;

    for (int i = 1; i < limit + 1; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            multiples.push_back(i);
        }
    }

    // Table header.
    cout << "| Equation | Sum |" << endl
         << "| :---: | :---: |" << endl;

    // First row.
    cout << "| 1 + 3 | 4 |" << endl; 

    int previous_sum = 4;

    // Table contents.
    for (int i = 2; i < multiples.size(); i++)
    {
        cout << "| " << previous_sum << " + " << multiples[i] << " | " << previous_sum + multiples[i] << " |" << endl;
        previous_sum += multiples[i];
    }

    return 0;
}