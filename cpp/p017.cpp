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

	std::array<std::string, 20> ones = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
										 "ten", "eleven", "twelve", "thirteen", "forteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
	std::array<std::string, 9> tens = { "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
	std::array<std::string, 5> thousands = { "hundred", "thousand", "million", "billion", "trillion"  };

	int total = 0;
	for (int i = start; i <= end; i++) {
		if (i <= 19) {
			total += ones[i].size();
		}
		if (i >= 20 && i <= 99) {
			int local = i;
			int one = local % 10;
			local /= 10;
			int ten = local % 10;
			total += tens[ten].size() + ones[one].size();
		} 
		if (i >= 100 && i <= 999) {
			int local = i;
			int one = local % 10;
			local /= 10;
			int ten = local % 10;
			local /= 10;
			int hundred = local % 10;
			total += ones[hundred].size() + 7 + tens[ten].size() + ones[one].size();
		}
	}

	total += 11;

	return total;

}

static void p017_bench(benchmark::State& state) {
	for (auto _ : state)
		compute(1, 1'000);
}

BENCHMARK(p017_bench);

int main(int argc, char** argv) {
	benchmark::Initialize(&argc, argv);
	benchmark::RunSpecifiedBenchmarks();
}

// Answer: 21124

// 
