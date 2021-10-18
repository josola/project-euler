/* 
 * Project Euler
 * Problem 16 - Power digit sum
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021
 */

#include <cmath>
#include <string>

#include "benchmark/benchmark.h"

int compute(const int base, const int exponent) {

	std::string product = std::to_string(pow(base, exponent));

	/*
	 * - To get the integer equivalent of an ASCII character, you
	 *   subtract the character by '0', or its ASCII value of 48.
	 * - For example, the ASCII value of '1' is 49.
	 *   '1' - '0' = 1 or 49 - 48 = 1
	 */

	int sum = 0;
	for (char &num : product)
		if (num != '.' && num != '0')
			sum += num - '0';

	return sum;

}

static void p016_bench(benchmark::State& state) {
	for (auto _ : state)
		benchmark::DoNotOptimize(compute(2, 1'000));
}

BENCHMARK(p016_bench)->Unit(benchmark::kMicrosecond);

int main(int argc, char** argv) {
	benchmark::Initialize(&argc, argv);
	benchmark::RunSpecifiedBenchmarks();
}

// Answer: 1366

// Run on (8 X 24.121 MHz CPU s) ARM64
// -----------------------------------------------------------------------
// Benchmark                             Time             CPU   Iterations
// -----------------------------------------------------------------------
// p016_bench/1'000                   31.3 us         31.3 us        22083
// p016_bench_BigO                       O(N)            O(N)
