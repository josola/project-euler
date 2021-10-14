/* 
 * Project Euler
 * Problem 4 - Largest palindrome product
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <iostream>

#include "benchmark/benchmark.h"

int compute(const int limit) {

	int palindrome = 0;
	
	for (int i = limit; i > 100; i--) {
		for (int j = limit; j > 100; j--) {
			
			if (palindrome > (i * j))
				break;
			
			else {

				int product = i * j;
				int reverse = 0;

				while (product != 0) {
					reverse = reverse * 10 + product % 10;
					product /= 10;
				}
				
				if (reverse == (i * j))
					palindrome = i * j;

			}

		}
	}

	return palindrome;

}

static void p004_bench(benchmark::State& state) {
	for (auto _ : state)
		benchmark::DoNotOptimize(compute(state.range(0)));
}

BENCHMARK(p004_bench)->RangeMultiplier(2)->Range(999, 7992)->Unit(benchmark::kMicrosecond);

int main(int argc, char** argv) {
	::benchmark::Initialize(&argc, argv);
	::benchmark::RunSpecifiedBenchmarks();
}

// Answer: 906609

// Run on (8 X 24.1214 MHz CPU s) Apple M1 (ARM64)
// -----------------------------------------------------------
// Benchmark                 Time             CPU   Iterations
// -----------------------------------------------------------
// p004_bench/99          37.3 us         37.3 us        18745
// p004_bench_BigO      O(N LogN)       O(N LogN)
