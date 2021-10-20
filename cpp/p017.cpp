/* 
 * Project Euler
 * Problem 17 - Number-letter-counts
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021
 */

#include <string>
#include <array>

#include "benchmark/benchmark.h"

int compute(const int start, const int end) {

	std::array<std::string, 20> ones_place = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "forteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
	std::array<std::string, 10> tens_place = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
	std::string hundreds_place = "hundred";
	std::string thousands_place = "thousand";

	int total = 0;

	for (int i = start; i <= end; i++) {

		std::string word = "";

		if (i < 20)
			word = ones_place[i];
		else if (i >= 20 && i < 100)
			word = tens_place[i / 10] + ones_place[i % 10];
		else if (i >= 100 && (i % 100) / 10 < 2 && i != end)
			word = ones_place[i / 100] + hundreds_place + "and" + ones_place[i % 100];
		else if (i >= 100 && i < end)
			word = ones_place[i / 100] + hundreds_place + "and" + tens_place[(i % 100) / 10] + ones_place[i % 10];
		else if (i == end)
			word = "onethousand";

		total += word.size();

	}

	return total;

}

static void p017_bench(benchmark::State& state) {
	for (auto _ : state)
		compute(1, 1'000);
}

BENCHMARK(p017_bench)->Unit(benchmark::kMicrosecond);

int main(int argc, char** argv) {
	benchmark::Initialize(&argc, argv);
	benchmark::RunSpecifiedBenchmarks();
}

// Answer: 21'124

// Run on (8 X 24.122 MHz CPU s) ARM64
// -----------------------------------------------------------------------
// Benchmark                             Time             CPU   Iterations
// -----------------------------------------------------------------------
// p017_bench/1'000                   51.4 us         51.4 us        10655
// p017_bench_BigO                       O(N)            O(N)
