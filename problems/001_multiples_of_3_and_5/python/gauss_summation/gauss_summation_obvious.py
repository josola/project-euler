# problems/001_multiples_of_3_and_5/python/gauss_summation/gauss_summation_obvious.py
# Guass Summation Algorithm Obvious
# (c) Jordan Sola 2021
# Written by Jordan Sola 2021

# Answer: 233168

n = 999

d = 3

m = n // d

threes = d * (m * (m + 1) // 2)

d = 5

m = n // d

fives = d * (m * (m + 1) // 2)

d = 15

m = n // d

fifteens = d * (m * (m + 1) // 2)

total = threes + fives - fifteens

print (total)