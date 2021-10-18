/* 
 * Project Euler
 * Problem 6 - Sum square difference
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <cmath>
#include <iostream>

#include "benchmark/benchmark.h"

int compute(const int limit) {

	/*
	 * - We find this by using Gauss's series formula.
	 * - Square Sum Formula: m = ((n)(n + 1) / 2)^2
	 * - Sum Square Formula: m = (n)(n + 1)(2n + 1) / 6
	 */
	
	return (pow(limit * (limit + 1) / 2, 2)) - (limit * (limit + 1) * ((2 * limit) + 1) / 6);

}

static void p006_bench(benchmark::State& state) {

	int result;
	for (auto _ : state) {
		benchmark::DoNotOptimize(result = compute(state.range(0)));
	}

	// Extra layer of optimization prevention
	std::ostream cnull(0);
	cnull << result;

}

BENCHMARK(p006_bench)->RangeMultiplier(2)->Range(100, 800)->Unit(benchmark::kMillisecond);

int main(int argc, char** argv) {
	::benchmark::Initialize(&argc, argv);
	::benchmark::RunSpecifiedBenchmarks();
}

// Answer: 25164150

// Run on (8 X 24.029 MHz CPU s) ARM64
// ---------------------------------------------------------
// Benchmark               Time             CPU   Iterations
// ---------------------------------------------------------
// p006_bench/100       1.10 ns         1.10 ns    556010072
// p006_bench_BigO         O(1)            O(1)
