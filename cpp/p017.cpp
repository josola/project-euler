/* 
 * Project Euler
 * Problem 17 - Number-letter-counts
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

int main()
{
    /*
    What do I want to do?
    
    -   Find the sum of all the characters in the set of text
        representations for each number in a finite set of numbers.

    What are my requirements?

    -   The set of numbers is 1 - 1,000.
    -   Do not count spaces or hyphens.
    -   The use of "and" is required. */

    /*
    Start with the root, the set of numbers 1 - 1,000.
    
    ?   Do I need to take them in as integers, then convert
        them to their string counterparts? - No!

        *   The jumps in relevant logic, that this method
            will entail, requires a lot of mental overhead.
        *   It would be easier to understand what's going
            on if each step could be represented in your logic chain.
            
    ?   Can I copy each digit of the number into an array?
    
        *   That's an extra step, which adds to the
            complexity of this solution, but this step
            keeps logic separate.
        *   You can determine the place of each digit by
            using the digit's index within the array.
        *   You can determine the text equivelent of each
            digit by matching the the string that is
            located at the index equal to that digit's
            value within the digit text array.

        ?/a   How do I know when to add "and"?

            *   "and" must be added to numbers
                that are greater than one-hundred
                and are less than nine-hundred and ninety-nine.

            ?/aa  How do I translate this to a system that doesn't
                recognize the value of a number?

                *   I'm starting at the largest place value
                    each time I move to a new set iteration.
                *   I am tracking the size of each number's
                    set of digits. Which allows assigning
                    indexes to each digit in the number.
                *   I can access the current element's
                    place value by using the size of the
                    number array, minus the current element
                    index, as the index of the places array.
            
            /ab How do I deal with "teen" numbers and "ty" numbers?

                *   They will have their own text array.
                *   "teen" and "ty" numbers will always be
                    in the same place within each number.
                    "ty" apply to numbers greater than nineteen
                    and less than one-hundred.
                    "teen" apply to numbers greater than twelve
                    but less than twenty.

    !   We need three arrays of strings.

        1   An array of "ones": {"one", "two", "three", ... , "thirteen", etc.}
        2   An array of "tens": {"twenty", "thirty", "forty", etc.}
        3   An array of "places": {"hundred", "thousand", "million", etc}
    */

    return 0;
}