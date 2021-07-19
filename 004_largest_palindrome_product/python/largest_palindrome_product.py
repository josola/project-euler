# Largest Palindrome Product
# Prject Euler Problem 4
# (c) Jordan Sola 2021
# Written by Jordan Sola 2021

# Answer: 906609

LIMIT_A = 999
LIMIT_B = 999

palindrome = 0

# Stop at 100, can't count double digit numbers.
for a in range(LIMIT_A, 100, -1):

    for b in range(LIMIT_B, 100, -1):

        # String conversion is used to check for palindrome.
        product = a * b
        str_product = str(product)

        if str_product == str_product[::-1]:
            # Need greatest palindrome of two numbers.
            if product > palindrome:
                palindrome = product

print(palindrome)