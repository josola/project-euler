/*
 * Project Euler
 * Problem 14 - Longest Collatz sequence
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2020-2021
 */

#include "benchmark/benchmark.h"

int compute(const int limit) {
	
	int max_start = 0;
	int max_length = 0;
	
	/*
	 * - Every number in the bottom half of n has the same
	 *   reverse map in 2n, so we can start our sequence
	 *   at (limit / 2) + 1 to cut out half the calculations.
	 */
	
	for (int i = (limit / 2) + 1; i < limit; i++) {
		
		long long int start = i;
		int length = 0;
		
		while (start != 1) {
			
			if (start % 2 == 0)
				start /= 2;
			else if (start % 2 != 0)
				start = (3 * start) + 1;
			
			length++;
			
		}
		
		if (length > max_length) {
			max_length = length;
			max_start = i;
		}
		
	}
	
	return max_start;
	
}

static void p014_bench(benchmark::State& state) {
	for (auto _ : state)
		benchmark::DoNotOptimize(compute(1'000'000));
}

BENCHMARK(p014_bench)->Unit(benchmark::kMillisecond);

int main(int argc, char** argv) {
	benchmark::Initialize(&argc, argv);
	benchmark::RunSpecifiedBenchmarks();
}

// Answer: 837'799

// Run on (8 X 24.0449 MHz CPU s) ARM64
// -----------------------------------------------------------------------
// Benchmark                             Time             CPU   Iterations
// -----------------------------------------------------------------------
// p014_bench/1'000'000               92.6 ms         92.6 ms            8
// p014_bench_BigO                       O(N)            O(N)
