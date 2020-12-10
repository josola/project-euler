#
# main.py
# Project Euler - Problem 14
#
# Jordan Sola 2020 - MIT License

# global variables
num = 999999
highest_term = 0
highest_starting_num = 0

while num != 1:

    # current term and starting number need to be seperate
    term = num
    
    term_count = 0
    
    while term != 1:

        # collatz formula
        if term % 2 == 0:
            term = term / 2
        else:
            term = (3 * term + 1) / 2

        term_count += 1
    
    # highest term and highest starting point need to be tracked
    if term_count >= highest_term:
        highest_term = term_count
        highest_starting_num = num

    num -= 1

print(highest_term)
print(highest_starting_num)
