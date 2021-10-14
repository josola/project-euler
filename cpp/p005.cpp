/* 
 * Project Euler
 * Problem 5 - Smallest multiple
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <numeric>
#include <iostream>

#include "benchmark/benchmark.h"

long long int compute(const int limit) {
	
	/*
	 * - We're looking for the least common multiple (LCM) of the input set.
	 * - We use a formula for the LCM by greatest common factor (GCF).
	 * - Formula: LCM(a,b) = |(a×b)|/GCF(a,b)
	 *   a = previous LCM in set, starting at the first term in the set
	 *   b = term in set
	 */
	
	long long int result = limit - (limit - 1);
	
	for (int i = 2; i < limit + 1; i++)
		result = abs(result * i) / std::gcd(result, i);

	return result;

}

static void p005_bench(benchmark::State& state) {
	for (auto _ : state)
		benchmark::DoNotOptimize(compute(state.range(0)));
}

BENCHMARK(p005_bench)->RangeMultiplier(2)->Range(20, 160);
BENCHMARK_MAIN();

// RESULTS

// Run on (8 X 24.1209 MHz CPU s) Apple M1 (ARM64)
// -----------------------------------------------------------
// Benchmark                 Time             CPU   Iterations
// -----------------------------------------------------------
// p005_bench/20           85.36 ns         85.35 ns   7029312
// p005_bench_BigO           O(N)             O(N)