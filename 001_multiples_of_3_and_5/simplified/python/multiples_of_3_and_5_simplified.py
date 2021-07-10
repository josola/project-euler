# Multiples of 3 and 5
# Simplified Algorithm
# (c) Jordan Sola 2021
# Written by Jordan Sola 2021

# Answer: 233168

LIMIT = 1000
multiples_accumulation = 0

for num in range(3, LIMIT):
    if num % 3 == 0 or num % 5 == 0:
        multiples_accumulation += num

print(multiples_accumulation)