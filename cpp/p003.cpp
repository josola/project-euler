/* 
 * Project Euler
 * Problem 3 - Largest prime factor
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sol 2020-2021
 */

#include "benchmark/benchmark.h"

long long int compute(const long long int num) {

	long long int output = num;

	/*
	 * - Any prime number that is greater than a composite number cannot be the
	 *   largest prime, we elimenate primes greater than a constant by
	 *   dividing the num by its composite.
	 */
	
	for (long long int i = 3; i < output; i += 2) {
		if (output % i == 0)
			output /= i;
	}

	return output;

}

static void p003_bench(benchmark::State& state) {
	for (auto _ : state)
		benchmark::DoNotOptimize(compute(600'851'475'143));
}

BENCHMARK(p003_bench)->Unit(benchmark::kMicrosecond);

int main(int argc, char** argv) {
	::benchmark::Initialize(&argc, argv);
	::benchmark::RunSpecifiedBenchmarks();
}

// Answer: 6'857

// Run on (8 X 24.039 MHz CPU s) ARM64
// ------------------------------------------------------------------
// Benchmark                        Time             CPU   Iterations
// ------------------------------------------------------------------
// p003_bench/600'851'475'143    13.3 us         13.3 us        46997
// p003_bench_BigO               O(LogN)         O(LogN)
