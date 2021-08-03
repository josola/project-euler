# The Naive Solution

What does naive mean? Simplistic? Overly "noobish"? How about a great start? That's right, if you're going to start with something then a solution to a problem is an excellent place to start. So don't feel bad if this algorithm is similar to your first slution to this problem, but don't take this one as the end all be all solution either! Without further ado though, let us dive right in.

Problem number three in Project Euler's problem set can be considered a doozy at first glance, prime factors? Do I really have to find 600,851,475,143 of them? Well no, of course not. You're not finding 600,851,475,143 prime factors, you're finding the largest prime factor up to a limit of 600,851,475,143, which is still a lot. This algorithm doesn't really help cut down and the amount of work you're making your computer do, with this solution, your CPU will be crunching 361,022,495,181,519,200,000,000... That's three hundred sixty one sextillion, twenty two quintillion, four hundred ninety five quadrillion, one hundred eighty one trillion, five hundred nineteen billion, two hundred million... oof. Don't try this algorithm at home, if you do, let me know how long it takes because I really don't want to try it myself.

## The way this one works is as follows:

You must have a LIMIT that you want to find the largest prime factor for. In our case this LIMIT is 600,851,475,143.

Our main algorithm consists of:

1. Getting all the prime numbers between 2 and our LIMIT.
   
    1. Iterating from the minimum discovered prime 2, to our LIMIT.

    2. During each initial iteration, we iterate from our minimum discovered prime to the current iteration. e.g. from 2 to 13, when on iteration 13.
    3. During each iteration of our second loop, we check if the current iteration is a factor of the initial iteration.
    4. If no iterations of the second loop are factors of the initial iteration, in the first loop, then that initial iteration number is prime.
    5. If the initial iteration number is prime, we place that number in a list of other prime numbers.
    6. We now have a list of all the prime numbers between 2 and our LIMIT.
2. Iterating from the end of our list of primes to the beginning.
   
    1. During each iteration, we check to see if the current number is a factor of our LIMIT.
   
    2. If it is a factor, we have our largest prime factor and we are finished.

As you probably have noticed, our most time consuming steps are the initial and secondary iterations to find our prime numbers. What doesn't help this algorithm is now we have a third input that we need to process, the list of prime numbers. These steps triple the workload being processed so now instead of our input being 600,851,475,143 it is now 1,201,702,950,286 plus however many prime numbers we find in the initial iterations. Taking what is an already unmanageable input and turning it into an unbearable input.

The running time for this algorithm is:

***O(n<sup>2</sup>m)***