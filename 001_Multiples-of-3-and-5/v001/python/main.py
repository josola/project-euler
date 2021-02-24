# main.py
# Project Euler
# Problem 1 - Multiples of 3 and 5
# Solution - v001

LIMIT = 1000
sum = 0

for i in range(LIMIT):
    if i % 3 == 0 or i % 5 == 0:
        sum += i
    else:
        continue

print(sum)