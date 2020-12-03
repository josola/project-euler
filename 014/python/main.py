n = 999999

highest_term = 0
highest_start = 0

while n != 1:
    o = n
    terms = 0
    
    while o != 1:
        if o % 2 == 0:
            o = o / 2
        else:
            o = (3 * o + 1) / 2
        terms += 1
    
    if terms >= highest_term:
        highest_term = terms
        highest_start = n
    n -= 1

print(highest_term)
print(highest_start)