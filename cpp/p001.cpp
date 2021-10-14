/*
 * Project Euler
 * Problem 1 - Multiples of 3 or 5
 * (C) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2020-2021
 */

#include <array>

#include "benchmark/benchmark.h"

int compute(const int limit) {
	
	std::array<int, 3> a = {3, 5, -15};
	std::array<int, 3> n = {(limit / a[0]), (limit / a[1]), (limit / a[2])};
	std::array<int, 3> n_plus = {1, 1, -1};
	
	/*
	 * - Gauss Summation Formula: sum = a(n(n + 1) / 2).
	 *   a = factor (3, 5, -15)
	 *   n = limit (999) / factor (3, 5, -15)
	 * - We need to remove 15 as it is a factor of numbers that have already
	 *   been counted as factors of 3 and 5.
	 */
	
	int sum = 0;
	for (int i = 0; i < 3; i++)
		sum += a[i] * (n[i] * (n[i] + n_plus[i]) / 2);

	return sum;

}

static void p001_bench(benchmark::State& state) {
	for (auto _ : state)
		benchmark::DoNotOptimize(compute(state.range(0)));
}

BENCHMARK(p001_bench)->RangeMultiplier(2)->Range(100, 1000);
BENCHMARK_MAIN();

// RESULTS

// Run on (8 X 24.1205 MHz CPU s) Apple M1 (ARM64)
// -------------------------------------------------------------
// Benchmark                   Time             CPU   Iterations
// -------------------------------------------------------------
// p001_bench/1000           2.48 ns          2.48 ns  273868629
// p001_bench_BigO             O(1)             O(1)
