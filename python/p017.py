def compute(START, END):
	ones_place = [ "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "forteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" ]
	tens_place = [ "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" ]
	hundreds_place = "hundred"
	total = 0
	for i in range(START, END + 1, 1):
		word = ""
		if i < 20:
			word = ones_place[i]
		elif i >= 20 and i < 100:
			word = tens_place[i // 10] + ones_place[i % 10]
		elif i >= 100 and (i % 100) // 10 == 0 and i % 10 == 0 and i < 1000:
			word = ones_place[i // 100] + hundreds_place
		elif i >= 100 and (i % 100) // 10 < 2 and i < 1000:
			word = ones_place[i // 100] + hundreds_place + "and" + ones_place[i % 100]
		elif i >= 120 and i < 1000:
			word = ones_place[i // 100] + hundreds_place + "and" + tens_place[(i % 100) // 10] + ones_place[i % 10]
		elif i == 1000:
			word = "onethousand"
		total += len(word)
	return total

if __name__ == "__main__":
	print(compute(1, 1000))
