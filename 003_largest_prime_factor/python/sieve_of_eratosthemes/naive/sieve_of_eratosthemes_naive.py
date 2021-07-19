# Largest Prime Factor
# Sieve of Eratosthemes Naive
# (c) 2021 Jordan Sola
# Written by Jordan Sola 2021

LIMIT = 120

def GetProgression(LIMIT):
    progression = []

    # 1 cannot be prime, must start at 2
    for num in range(2, LIMIT + 1):
        progression.append(num)

    return progression

def Sieve(LIMIT):
    progression = GetProgression(LIMIT)
    primes = [2, 3, 5, 7]

    for prime in primes:
        for term in progression:
            if term % prime == 0:
                progression.remove(term)

    # Keeps logic for the sieve simpler.
    for prime in range(len(primes) -1, -1, -1):
        progression.insert(0, primes[prime])
    
    return progression

def GetLargestPrimeFactor(LIMIT):
    primes = Sieve(LIMIT)
    largest_prime_factor = 0

    for prime in range(len(primes) -1, -1, -1):
        if LIMIT % primes[prime] == 0:
            largest_prime_factor = primes[prime]
            break

    return largest_prime_factor

largest_prime_factor = GetLargestPrimeFactor(LIMIT)

print(largest_prime_factor)