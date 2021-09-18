# main.py
# Project Euler
# Problem 17 - Number letter counts
# Algorithm - v001

from num2words import num2words

# ----- global variables
length = 1000
words = []
total_letters = 0
# -----

# Don't add zero to list of numbers.
for i in range(length):
    words.append(num2words(i + 1))

# Spaces and dashes cannot be counted.
for i in range(length):
    words[i] = words[i].replace(' ', '')
    words[i] = words[i].replace('-', '')

for i in words:
    total_letters += len(i)

print(total_letters)