# Even Fibonacci Numbers
# Naive Algorithm
# (c) 2021 Jordan Sola
# Written by Jordan Sola

# Answer: 4613732

def GetFibonacciSequence(LIMIT):
    sequence = [1, 2]
    for num in range(2, LIMIT):
        term = sequence[num - 2] + sequence[num - 1]
        if term <= LIMIT:
            sequence.append(term)
        else:
            break
    return sequence

def GetEvenElements(sequence):
    even_elements = []
    for elem in sequence:
        if elem % 2 == 0:
            even_elements.append(elem)
    return even_elements

def Accumulate(sequence):
    sum = 0
    for num in sequence:
        sum += num
    return sum

LIMIT = 4000000
fibonacci_sequence = GetFibonacciSequence(LIMIT)
even_fibonacci_terms = GetEvenElements(fibonacci_sequence)
solution = Accumulate(even_fibonacci_terms)
print(solution)
