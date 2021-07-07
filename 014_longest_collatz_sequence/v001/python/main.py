# main.py
# Project Euler
# Problem 14 - Longest Collatz sequence
# Algorithm - v001

# ----- global variables
start = 999999
highest_term = 0
highest_starting_num = 0
# -----

while start != 1:

    # Start term is its own iterator, needs a second one for current term.
    current_term = start
    term_count = 0
    
    while current_term != 1:

        # This is the Collatz formula.
        if current_term % 2 == 0:
            current_term = current_term / 2
        else:
            current_term = (3 * current_term + 1) / 2

        term_count += 1
    
    # A highest term and starting point are the end goal.
    if term_count >= highest_term:
        highest_term = term_count
        highest_starting_num = start

    start -= 1

print(highest_term)
print(highest_starting_num)
