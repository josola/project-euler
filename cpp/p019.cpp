/* 
 * Project Euler
 * Problem 19 - Counting Sundays
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021
 */

#include <array>

#include "benchmark/benchmark.h"

int day(const int day, const int month, int year, std::array<int, 12> month_code) {
	
	/*
	* This algorithm was developed by Tomohiko Sakamoto,
	* who adapted it from John Conways' DOOMSDAY algorithm.
	*/
	
	// Compensate for leap year
	if (month < 3) {
		year--;
	}
	
	// Sakamoto's algorithm
	return (year + (year / 4) - (year / 100) + (year / 400) + month_code[month - 1] + day) % 7;
	
}

int compute() {
	
	std::array<int, 3> start = { 1, 1, 1901 };
	std::array<int, 3> end = { 31, 12, 2000 };
	
	const int target_weekday = 0; // Desired day of the week e.g. SUNDAY: 0
	const int target_day_of_month = 1; // Desired day of the month
	
	/*
	* MONTH_CODE is acquired by using the pattern for
	* month starts found in Tomohiko Sakamoto's algorithm for days.
	*/
	std::array<int, 12> month_code = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
	
	int day_date_matches = 0;
	
	for (int year = start[2]; year <= end[2]; year++) {
		for (int month = 1; month <= 12; month++)
			if (day(target_day_of_month, month, year, month_code) == 0)
				day_date_matches++;
	}
	
	return day_date_matches;
	
}

static void p019_bench(benchmark::State& state) {
	for (auto _ : state)
		benchmark::DoNotOptimize(compute());
}

BENCHMARK(p019_bench);

int main(int argc, char** argv) {
	benchmark::Initialize(&argc, argv);
	benchmark::RunSpecifiedBenchmarks();
}

// Answer: 171

// Run on (8 X 24.0345 MHz CPU s) ARM64
// -----------------------------------------------------
// Benchmark           Time             CPU   Iterations
// -----------------------------------------------------
// p019_bench        613 ns          613 ns      1141264
// p019_bench_BigO     O(N)            O(N)
