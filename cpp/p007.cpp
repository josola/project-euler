/* 
 * Project Euler
 * Problem 7 - 10001st prime
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <iostream>

#include "benchmark/benchmark.h"

int compute(const int limit) {

	int count = 2;
	int prime = 3;
	
	while (count < limit) {
		// Skip even numbers, they cannot be prime
		prime += 2;
		bool is_prime = true;
		
		if (prime % 3 == 0)
			continue;
		
		else {
			// Optimized primality test for numbers above 25
			for (int i = 5; i * i <= prime; i += 6) {
				if (prime % i == 0 || prime % (i + 2) == 0)
					is_prime = false;
				continue;
			}
		}
		
		if (is_prime)
			count++;
	}

	return prime;

}

static void p007_bench(benchmark::State& state) {
	for (auto _ : state)
		benchmark::DoNotOptimize(compute(state.range(0)));
}

BENCHMARK(p007_bench)->RangeMultiplier(2)->Range(10'001, 80'001)->Unit(benchmark::kMillisecond);

int main(int argc, char** argv) {
	::benchmark::Initialize(&argc, argv);
	::benchmark::RunSpecifiedBenchmarks();
}

// Answer: 104743

// Run on (8 X 24.1216 MHz CPU s) ARM64
// -----------------------------------------------------------
// Benchmark                 Time             CPU   Iterations
// -----------------------------------------------------------
// p007_bench/10'001      2.30 ms         2.30 ms          295
// p007_bench_BigO      O(N logN)       O(N logN)
