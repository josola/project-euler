### Problem #1 &#1F9EE;

Project Euler starts with an easy-to-read problem with both a straightforward solution and an elegant solution. So how do we figure this one out? First, let's recap what the problem is.

*Find the sum of all the multiples of $3$ or $5$ below $1000$.*

Four important parts make up this problem.

- Our final answer is the result of a summation.
- This summation comes out of a set of multiples.
- The multiples need to be $3$ or $5$. The or portion of this is very important.
- The set of multiples must be below $1,000$ in size. This sets our limit at $999$.

Let's start with a very basic approach. The approach we are about to outline is the straight-forward answer to this problem.

In this approach, everything is done linearly, taking one small step at a time, until the desired solution is reached. This method is tedious, time-consuming, and should only be done by a mindless computer. It is otherwise known as a "brute force" solution.

**Straight-Forward Solution**

Here is a summary of what this solution does:

*For all the numbers in the sequence [1-999]. Determine whether the current number has 3 or 5 as a factor. This will reveal that number as either a multiple of 3 or 5. Add that multiple to a list, then sum all of the multiples in that list.*

Not too bad right? On the surface, we might think this solution is the easiest one out there, but this solution is particularly difficult for us to pull off. Why is it difficult? It is difficult because it forces you to process every single number in the sequence twice. Then this solution makes you compare the results you just computed twice. Then this solution makes you add every element in the final list together. That's over two-thousand calculations you need to make by hand! Now you can see why only a mindless machine should perform these tasks, not a living-organic human brain. That level of mental dedication is exhausting, even to the best mathematicians, opening the floodgates to small errors that are guaranteed to wreck the whole endeavor.

Let's take a look at what we will be doing.

First, we need to determine what makes a number a multiple of $5$ or $3$. Well, this one is easy. If a number is evenly divisible by either $3$ or $5$ then it is a multiple!

$13 \div 3 = 4.3$ - Does not produce a whole number. 3 is not a factor of 13.<br>
$13 \div 5 = 2.6$ - Does not produce a whole number. 5 is not a factor of 13.

> Since 13 does not divide into either 3 nor 5 evenly, it does not count towards the final sum.

$369 \div 3 = 123$ - Produces a whole number! 3 is a factor of 369.<br>
$369 \div 5 = 73.8$ - Does not produce a whole number. 5 is not a factor of 369.

> Since 369 divides into 3 or 5 evenly, it gets counted towards the final sum.

Great, now we have our procedure to find a multiple let's put it to use.

This process starts at 1 and repeats up to 999. This is the brute force part of this approach, everything is treated with a wide brush stroke without much complexity or elegance. Below is a link to a very large table showing every equation using the above procedure.

[table of equations](./equation-table.md)

Now don't take this list for granted. A lot is being done here.

- The procedure is applied to the first number in the sequence.
- If its result is a whole number, it's a multiple.
- Add it to the list of multiples.
- If its result isn't a whole number, it isn't a multiple.
- Don't add it to the list of multiples.
- Repeat steps one through five nine-hundred-and-ninety-five times!

This will give you a list of numbers that are multiples of either 3 or 5. Now we need to sum the numbers in that list. We must remain explicit that we need to add a multiple of three AND five only once and not twice. But will indirectly be able to track if a term is a multiple of both $3$ and $5$ since we are checking the term against both numbers every time.

Here's a breakdown of individual multiples: [multiples breakdown](./multiples-breakdown.md)<br>

Again, don't let the simplicity of this table fool you. We are still doing a ton of work here.

- Create a list of multiples of $3$.
- Create a list of multiples of $5$.
- Create a list of multiples of both $3$ and $5$.
- Compare $3$'s current element with $5$'s current element. Are the multiples the same?
- If they are the same, ignore the element in $5$'s list.
- If they are not the same. Add the first term of $3$'s list to the next term.
- Track that sum for the next step.
- Compare $3$'s current element with $5$'s current element. Are the multiples the same?
- If they are the same, ignore the element in $5$'s list.
- If they aren't the same. Add the first term of $5$'s list to the next term.
- Track that sum for the next step.
- Repeat steps four through eleven as many times as the number of elements in each list.

Here is a table of the sums leading up to our answer: [table of sums](./table_of_sums.md)

That was super tedious. I don't ever want to do that again. Maybe this will inspire most of us to search for more elegant solutions to life's biggest problems.

Speaking of elegant solutions!

**A More Elegant Approach:**

Now that we have done the work of finding out whether each number from $1$ to $999$ is divisible by either $3$ or $5$ we have discovered one piece of information that will allow us to take an approach that is more elegant and is quicker to complete.

As you may have noticed, the total number of multiples for 3 and 5 respectively are numbers that are the result of dividing the largest number in the sequence by $3$ or $5$.

$999 \div 3 = 333$<br>
$995 \div 5 = 199$

This means we only need to find the multiples of $3$ or $5$ up to their largest divisor allowing us to skip calculating every single element in each list. Something else you might have noticed is in the list of multiples, each multiple can be achieved via:

$3 \times (1, 2, 3, 4, 5, ..., 333) = (3, 6, 9, 12, 15, ..., 999)$

or

$5 \times (1, 2, 3, 4, 5, ..., 199) = (5, 10, 15, 20, 25, ..., 995)$

> Multiplication is a reversal of division and visa versa.

This produces a finite arithmetic progression. Which is another way of saying: In a series, the next number must have an equal difference of the previous number until the end of the series is reached.

Kinda cool right? But this is even cooler. What if I told you you could find the sum of every element in your arithmetic progression by finding the multiple of only one element? Now that's cool!

This is where the formula for an ***arithmetic series*** comes into play. For example, consider our $3$ progression as a series:

Progression:<br>
$(3, 6, 9, 12, 15, ..., 999)$

Series:<br>
$3 + 6 + 9 + 12 + 15 ... + 999$

With a number of terms:<br>
$(1, 2, 3, 4, 5, ..., 333)$

We can quickly find the series sum by taking the number $n$ of terms being added ($3 = 333, 5 = 199$), multiplying by the sum of the first and last number in the progression ($3 = (3 + 999) = 1002, 5 = (5 + 995) = 1010$), and dividing by $2$:

$\frac{n(a_1 + a_n)}{2}$

If we sum all the multiples of $3$ up to $999$:

$\frac{333(3 + 999)}{2}$

$\frac{333(1002)}{2}$

$\frac{333,666}{2}$

$166,833$

And all the multiples of $5$ up to $995$:

$\frac{199(5 + 995)}{2}$

$\frac{199(1000)}{2}$

$\frac{199,000}{2}$

$99,500$

This gives us a total sum of the two series: $266,333$

That was quick! And easy too! Much easier than processing every single element in two lists.

But wait! That can't be right! Why doesn't that produce the correct sum: $233,164$? Well, there was a small trap placed in the original question:

***multiples of $3$ or $5$***

$3$ and $5$ have multiples that they both divide equally into. And with our above summation, we counted some multiples twice when we should have counted them only once!

But don't panic! The smart people that call themselves mathematicians have already come up with a name for this problem: ***inclusion-exclusion principle***. In the ***inclusion-exclusion principle***, for some set *A*, and some set *B*, we need to subtract their *intersection*.

> In this case, the intersection between the sets of $3$ and $5$ is $15$, to make sure you get the correct intersection with ANY set requires a bit of math that doesn't contribute much to this problem. So for our intersection, we found that $15$ is the first multiple of both $3$ and $5$, causing anything that is a multiple of $15$ to count as both a multiple of $3$ and a multiple of $5$.

Moving on, let us call all the multiples of $15$ set *C*. To progress, we need to find the sum of all the multiples of $15$ up to $999$ so we can subtract it from the other sets. Where the largest number that is divisible by $15$ is $990$, and the number of multiples in $15$'s progression is $66$. Remember earlier when we found out that the number of terms in $3$'s progression is $333$ by dividing the largest number that divides evenly by $3$ ( which is $999$) by three? Well, we did the same thing to find $15$'s number of terms.

$990 \div 15 = 66$

To solve this by following the ***inclusion-exclusion principle***, we need to:<br>
- Add the sum of the multiples of $3$ and $5$.
- Then subtract the sum of the multiples of $15$ from that total.

Sum of the multiples of $15$ up to $990$:

$\frac{66(15 + 990)}{2}$

$\frac{66(1005)}{2}$

$\frac{65,325}{2}$

$33,165$

Now if we subtract *C* from the sum of *A* and *B* we will get our final sum.

$166,833 + 99,500 - 33,165 = ?$

$266,333 - 33,165 = 233,168$

Now, instead of repeating multiple steps over two-thousand times, we can let an elegant formula do a vast majority of the heavy living for us. Happy Eulering!

Send me an [email](mailto:jordan.sola@gmail.com) if you have any questions.<br>
If you see any errors, create a pull request with your corrections.