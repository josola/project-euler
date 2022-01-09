/* Project Euler
   Problem 6 - Sum square difference
   (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
   Written by Jordan Sola 2020-2021 */

#include <cmath>
#include <iostream>

#include "benchmark/benchmark.h"

int compute(const int LIMIT) {
	
	/* - We find this by using Gauss's Series formula.
	   - Square Sum Formula: m = ((n)(n + 1) / 2)^2
	   - Sum Square Formula: m = (n)(n + 1)(2n + 1) / 6 */
	
	int difference = 0;
	benchmark::DoNotOptimize(difference = pow(LIMIT * (LIMIT + 1) / 2, 2) - (LIMIT * (LIMIT + 1) * ((2 * LIMIT) + 1) / 6));
	
	return difference;
	
}

static void p006_bench(benchmark::State& state) {
	
	int result = 0;
	for (auto _ : state)
		benchmark::DoNotOptimize(result = compute(100));
	
	// Extra layer of optimization prevention
	std::ostream cnull(0);
	cnull << result;
	
}

BENCHMARK(p006_bench)->Unit(benchmark::kMillisecond);

int main(int argc, char** argv) {
	benchmark::Initialize(&argc, argv);
	benchmark::RunSpecifiedBenchmarks();
}

// Answer: 25'164'150

/* Run on (8 X 24.029 MHz CPU s) ARM64
   ---------------------------------------------------------
   Benchmark               Time             CPU   Iterations
   ---------------------------------------------------------
   p006_bench/100       1.10 ns         1.10 ns    556010072
   p006_bench_BigO         O(1)            O(1)              */
