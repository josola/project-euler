//
// main.cpp
// Project Euler #14
//
// Jordan Sola ®2020 - MIT License
//
// vALPHA - initial problem solution
//
// PROBLEM DESCRIPTION:
//
// Which starting number, under one million,
// produces the longest Collatz chain?
//
// The Collatz conjecture is a conjecture in mathematics
// that concerns a sequence defined as follows: start with
// any positive integer n. Then each term is obtained from
// the previous term as follows: if the previous term is
// even, the next term is one half of the previous term. If
// the previous term is odd, the next term is 3 times the
// previous term plus 1. The conjecture is that no matter
// what value of n, the sequence will always reach 1.
//
// Using the rule above and starting with 13, we generate
// the following sequence:
//
// 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

#include <iostream>
#include "collatz.h"

using std::cout;

int main()
{
    // A term in a Collatz chain can end up being larger
    // than the chain's staring number.
    // 
    // eg. 2147483647 is the largest number a 4 byte
    // unsigned integer can hold.
    //
    // To cover cases where the individual term
    // is larger than what an unsigned int allows.
    // a long int is used wherever a term is located.
    //
    long int n = 999168;

    // The highest term needs to be tracked to
    // solve the problem.
    //
    int highest_term = 0;
    long int highest_start = 0;

    while (n != 1)
    {
        // The starting term needs to remain
        // in-tact so that we can iterate all
        // the way down from the initial start
        // and find the longest chain for all numbers
        // below the start.
        //
        long int o = n;

        int terms = 0;

        // The Collatz algorithm needs access to
        // the number 1 to tell if it has reached
        // the end of its chain. If you use 'o > 1'
        // in this while loop you will receive an
        // incorrect result as the chain never reaches
        // its natural end.
        //
        while (o != 1)
        {
            o = Collatz(o);
            terms++;
        };

        if (terms >= highest_term)
        {
            highest_term = terms;
            highest_start = n;
        }
        n--;
    }
    cout << highest_term << '\n'
         << highest_start << '\n';
}
