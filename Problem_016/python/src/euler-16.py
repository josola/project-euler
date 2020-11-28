import math

base = 2
exponent = 1000
result = str(int(math.pow(base, exponent)))

str_result = []
for i in result:
    str_result.append(i)

num_arr = [int(i, base=16) for i in str_result]

sum = 0
for i in num_arr:
    sum += i
    
print(sum)