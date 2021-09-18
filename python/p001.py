# problems/001_multiples_of_3_and_5/python/gauss_summation/gauss_summation_simplified.py
# Guass Summation Algorithm Simplified
# (c) Jordan Sola 2021
# Written by Jordan Sola 2021

# Answer: 233168

n = 1000 - 1

a = 3
b = 5
c = -15

d = [a, b, c]
m = [n // a, n // b, int(n / c)]
f = [1, 1, -1]

total = 0 

for factor in range(len(m)):
    total += d[factor] * (m[factor] * (m[factor] + f[factor]) // 2)

print(total)