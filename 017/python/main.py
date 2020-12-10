#
# main.py
# Project Euler - Problem 17
#
# Jordan Sola 2020 - MIT License

from num2words import num2words

length = 1000
words = []

for i in range(length):
    # we're not counting zero so we need to start our words at one
    words.append(num2words(i + 1))

# Remove spaces and dashes, they cannot be counted.
for i in range(length):
    words[i] = words[i].replace(' ', '')
    words[i] = words[i].replace('-', '')

total_letters = 0

for i in words:
    total_letters += len(i)

print(total_letters)