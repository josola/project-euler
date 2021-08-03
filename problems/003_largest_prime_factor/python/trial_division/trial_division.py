# Largest Prime Factor
# Trial Division
# (c) 2021 Jordan Sola
# Written by Jordan Sola 2021

# Answer: 6857

LIMIT = 600851475143

def TrialDivision(NUM):
    itr = 2
    square_root = int(NUM ** 0.5)
    prime = True

    while (itr <= square_root):
        if (NUM % itr == 0):
            prime = False
            break
        itr += 1

    return prime

largest_prime_factor = 0
num = 2

# 1 cannot be prime, num must start at 2
while num <= LIMIT:
    if TrialDivision(num):
        if LIMIT % num == 0:
            LIMIT //= num
            largest_prime_factor = num

    num += 1

print(largest_prime_factor)
