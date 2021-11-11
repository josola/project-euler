# Project Euler
# Problem 22 - Names scores
# (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
# Written by Jordan Sola 2021

def oust(CHAR, LIST):
	
	output = []
	
	for item in LIST:
		output += item.replace(CHAR, '').split()
	
	return output

def text(DIRECTORY):
	
	content = []
	
	with open(DIRECTORY, 'r') as file:
		content += file
	
	return content

def seperate(DELIM, LIST):
	
	output = []
	
	for item in LIST:
		output += item.split(DELIM)
	
	return output

def prep(FILE_CONTENT):
	
	delimeter = ','
	unwanted = '\"'
	
	output = seperate(delimeter, oust(unwanted, FILE_CONTENT))
	output.sort()
	
	return output

def get_content(FILE):
	return prep(text(FILE))

def compute():
	
	names = get_content('p022_names.txt')
	
	total = 0
	pos = 0
	
	for name in names:
		
		pos += 1
		value = 0
		
		# Converts characters into ASCII values and subtracts
		# those values down to their respective position in
		# the english alphabet.
		
		for char in name:
			if ord(char) > 90:
				value += ord(char) - 96
			else:
				value += ord(char) - 64
		
		total += pos * value
	
	return total

if __name__ == "__main__":
	print(compute())

# Answer: 871198282

# Asymptotic complexity: O(N)

# M1           (3.2 GHz CPU) ARMv8-A64 (64 bit): 50000000 loops, best of 5: 5.45 nsec per loop
# Ryzen 5 2600 (3.4 GHz CPU) x86-64 (64 bit):
