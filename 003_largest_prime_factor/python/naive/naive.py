# Largest Prime Factor
# Naive Algorithm
# (c) 2021 Jordan Sola
# Written by Jordan Sola 2021

# Answer: 6857

LIMIT = 600851475143

def GetPrimeNumbers(LIMIT):
    prime_numbers = []

    # 1 cannot be prime, must start at 2
    for num in range(2, LIMIT):
        flag = False

        # same rule, cannot start at 1
        for factor in range(2, num):
            if num % factor == 0:
                flag = True
                break

        if flag:
            continue
        else:
            prime_numbers.append(num)

    return prime_numbers


def GetLargestPrimeFactor(LIMIT):
    largest_prime_factor = 0
    PRIMES = GetPrimeNumbers(LIMIT)

    for prime in range(len(PRIMES) - 1, 0, -1):
        if LIMIT % PRIMES[prime] == 0:
            largest_prime_factor = PRIMES[prime]
            break

    return largest_prime_factor


largest_prime_factor = GetLargestPrimeFactor(LIMIT)

print(largest_prime_factor)
