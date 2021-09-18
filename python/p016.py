# main.py
# Project Euler
# Problem 16 - Power digit sum
# Algorithm - v001

import math

# ----- global variables
base = 2
exponent = 1000
str_result = []
sum = 0
# -----

# math.pow returns a double, needs to be a string.
result = str(int(math.pow(base, exponent)))

# String needs to be split into characters.
for i in result:
    str_result.append(i)

# Characters in array need to be integers.
num_arr = [int(i, base=16) for i in str_result]

for i in num_arr:
    sum += i

print(sum)