# main.py
# Project Euler
# Problem 1 - Multiples of 3 and 5
# Solution - v001

factors = [3, 5]

LIMIT = 1000
sum = 0

for i in range(LIMIT):
    for factor in factors:
        if i % factor == 0:
            sum += i
            # Counts multiple factors if
            # you don't break out here.
            break
        else:
            continue

print(sum)