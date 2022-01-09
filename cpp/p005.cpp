/* Project Euler
   Problem 5 - Smallest multiple
   (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
   Written by Jordan Sola 2020-2021 */

#include <numeric>

#include "benchmark/benchmark.h"

long int compute(const int START, const int END) {
	
	/* - We are looking for the least common multiple (LCM) of the input set.
	   - We use a formula for the LCM by greatest common factor (GCF).
	   - Formula: LCM(a, b) = |(a × b)| / GCF(a, b)
	     a = previous LCM in set, starting at the first term in the set
	     b = next term in set */
	
	long int result = START;
	
	for (int i = 2; i < END + 1; i++)
		result = abs(result * i) / std::gcd(result, i);
	
	return result;
	
}

static void p005_bench(benchmark::State& state) {
	for (auto _ : state)
		benchmark::DoNotOptimize(compute(1, 20));
}

BENCHMARK(p005_bench);

int main(int argc, char** argv) {
	benchmark::Initialize(&argc, argv);
	benchmark::RunSpecifiedBenchmarks();
}

// Answer: 232'792'560

/* Run on (8 X 24.1209 MHz CPU s) ARM64
   -----------------------------------------------------------
   Benchmark                 Time             CPU   Iterations
   -----------------------------------------------------------
   p005_bench/20         85.36 ns        85.35 ns      7029312
   p005_bench_BigO           O(N)            O(N)              */
