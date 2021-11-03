# Project Euler
# Problem 18 - Maximum path sum I
# (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
# Written by Jordan Sola 2021

def day(DAY, MONTH, year, MONTH_CODE):
	
	# This algorithm was developed by Tomohiko Sakamoto,
	# who adapted it from John Conways' DOOMSDAY algorithm.
	
	# To compensate for leap years
	if MONTH < 3:
		year -= 1
	
	# Sakamoto's algorithm
	return (year + (year // 4) - (year // 100) + (year // 400) + MONTH_CODE[MONTH - 1] + DAY) % 7

def compute():
	
	START = [ 1, 1, 1901 ]
	END = [ 31, 12, 2000 ]
	
	TARGET_WEEKDAY = 0 # Desired day of the week e.g. Sunday: 0
	TARGET_DAY_OF_MONTH = 1 # Day of the month e.g. 31
	
	# MONTH_CODE is acquired by using the pattern for
	# month starts found in Tomohiko Sakamoto's algorithm for days.
	MONTH_CODE = [ 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 ]
	
	day_date_matches = 0
	
	for year in range(START[2], END[2] + 1):
		for month in range(1, 12 + 1):
			if day(TARGET_DAY_OF_MONTH, month, year, MONTH_CODE) == TARGET_WEEKDAY:
				day_date_matches += 1
	
	return day_date_matches

if __name__ == "__main__":
	print(compute())

# Asymptotic complexity: O(N)

# M1           (3.2 GHz CPU) ARMv8-A64 (64 bit): 1000 loops, best of 5: 261 usec per loop
