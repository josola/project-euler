# Largest Prime Factor
# Sieve of Eratosthemes Elegant Algorithm
# (c) 2021 Jordan Sola
# Written by Jordan Sola 2021

LIMIT = 600851475143

def GetLargestPrimeFactor(LIMIT):
    largest_prime_factor = 0

    # 600851475143 is prime, can't start there.
    for num in range(LIMIT - 1, 8, -1):
        if num % 2 == 0:
            continue
        elif num % 3 == 0:
            continue
        elif num % 5 == 0:
            continue
        elif num % 7 == 0:
            continue
        else:
            if LIMIT % num == 0:
                largest_prime_factor = num
                break

    # Need to seperate out primes into their own loop.
    discovered_primes = [2, 3, 5, 7]
    for prime in range(len(discovered_primes) -1, -1, -1):
        if LIMIT % discovered_primes[prime] == 0:
            largest_prime_factor = discovered_primes[prime]
            break

    return largest_prime_factor
            
largest_prime_factor = GetLargestPrimeFactor(LIMIT)

print(largest_prime_factor)
