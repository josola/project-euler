#
# main.py
# Project Euler - Problem 16
#
# Jordan Sola 2020 - MIT License

import math

# ----- global variables ----- #

base = 2
exponent = 1000

str_result = []

sum = 0

# ---------- #

# math.pow returns a double, needs to be a string
result = str(int(math.pow(base, exponent)))

for i in result:
    str_result.append(i)

# characters in array need to become integers
num_arr = [int(i, base=16) for i in str_result]

for i in num_arr:
    sum += i

print(sum)