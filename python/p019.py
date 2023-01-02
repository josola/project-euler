def day(DAY, MONTH, year, MONTH_CODE):
	if MONTH < 3:
		year -= 1
	return (year + (year // 4) - (year // 100) + (year // 400) + MONTH_CODE[MONTH - 1] + DAY) % 7

def compute():
	START = [ 1, 1, 1901 ]
	END = [ 31, 12, 2000 ]
	TARGET_WEEKDAY = 0
	TARGET_DAY_OF_MONTH = 1
	MONTH_CODE = [ 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 ]
	day_date_matches = 0
	for year in range(START[2], END[2] + 1):
		for month in range(1, 12 + 1):
			if day(TARGET_DAY_OF_MONTH, month, year, MONTH_CODE) == TARGET_WEEKDAY:
				day_date_matches += 1
	return day_date_matches

if __name__ == "__main__":
	print(compute())
