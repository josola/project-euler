/* 
 * Project Euler
 * Problem 12 - Highly divisible triangular number
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <cmath>
#include <iostream>

#include "benchmark/benchmark.h"

long int compute(const int target) {

	int term = 1;
	long int triangular = 0;
	
	int div_count = 0;
	while (div_count < target) {
		
		term++;
		div_count = 0;
		
		/*
		 * - Triangular numbers and arithmetic progressions can be found
		 *   using the same algorithm.
		 * - Triangular Number Algorithm: a = n * (n + 1) / 2
		 *   Where "a" is the triangular number, and "n" is the last number
		 *   in the arithmetic progression (term).
		 * - See p001, and p006 for more examples of
		 *   the arithmetic progression formula.
		 */
		
		triangular = term * (term + 1) / 2;
		
		/*
		 * - We can take the same algorithm problem 3 used to find
		 *   the largest prme factor and adapt it to find all the
		 *   factors belonging to our triangular number.
		 */
		
		int root = sqrt(triangular);
		for (int i = 1; i <= root + 1; i++) {
			if (triangular % i == 0) {
				div_count += 2;
			}
		}
		
	}

	return triangular;

}

static void p012_bench(benchmark::State& state) {
	for (auto _ : state)
		benchmark::DoNotOptimize(compute(state.range(0)));
}

BENCHMARK(p012_bench)->RangeMultiplier(2)->Range(500, 4'000)->Complexity()->Unit(benchmark::kMillisecond);

int main(int argc, char** argv) {
	::benchmark::Initialize(&argc, argv);
	::benchmark::RunSpecifiedBenchmarks();
}

// Answer: 76576500

// Run on (8 X 24.1214 MHz CPU s) Apple M1 (ARM64)
// -----------------------------------------------------------------------
// Benchmark                             Time             CPU   Iterations
// -----------------------------------------------------------------------
// p012_bench/500                     37.0 ms         37.0 ms           19
// P012_bench_BigO                       O(N)            O(N)
