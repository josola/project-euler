# Multiples of 3 and 5
# Obvious Algorithm
# (c) Jordan Sola 2021
# Written by Jordan Sola 2021

# Answer: 233168

def GetProgression(limit):
    progression = []
    for num in range(limit):
        progression.append(num)
    return progression

def GetProgressionMultiples(multiples, progression):
    progression_multiples = []
    for elem in progression:
        for mult in multiples:
            if elem % mult == 0:
                progression_multiples.append(elem)
                break
    return progression_multiples

def Accumulate(list):
    sum = 0
    for i in list:
        sum += i
    return sum

LIMIT = 1000
multiples = [3, 5]
progression = GetProgression(LIMIT)
progression_multiples = GetProgressionMultiples(multiples, progression)
target_sum = Accumulate(progression_multiples)
print(target_sum)