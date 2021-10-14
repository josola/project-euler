/*
 * Project Euler
 * Problem 14 - Longest Collatz sequence
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <iostream>

#include "benchmark/benchmark.h"

int compute(const int limit) {

	int max_start = 0;
	int max_length = 0;
	
	/*
	 * Every number in the bottom half of n has the same
	 * reverse map in 2n, so we can start our sequence
	 * at (limit / 2) + 1.
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
		benchmark::DoNotOptimize(compute(state.range(0)));
}

BENCHMARK(p014_bench)->Arg(1'000'000)->Arg(2'000'000)->Arg(4'000'000)->Arg(8'000'000)->Unit(benchmark::kMillisecond);

int main(int argc, char** argv) {
	benchmark::Initialize(&argc, argv);
	benchmark::RunSpecifiedBenchmarks();
}

// Answer: 837799

// Run on (8 X 24.0449 MHz CPU s)
// -----------------------------------------------------------------------
// Benchmark                             Time             CPU   Iterations
// -----------------------------------------------------------------------
// p014_bench/1'000'000               92.6 ms         92.6 ms            8
// p014_bench_BigO                       O(N)            O(N)
