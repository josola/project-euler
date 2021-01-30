//
// main.js
// Project Euler - Problem 1
//
// Jordan Sola 2021 - MIT License

/*
Given a limit, find the sum of all the
factors of 3 and 5 up to the limit.
*/

var limit = 1000;
var sum = 0;

var factor_a = 3;
var factor_b = 5;

for (var i = 0; i < limit; i++)
{
    if (i % factor_a == 0|| i % factor_b == 0)
    {
        sum += i;
    }
}

WScript.echo(sum);