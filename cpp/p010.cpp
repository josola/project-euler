/* 
 * Project Euler
 * Problem 10 - Summation of primes
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <vector>
#include <iostream>

#include "benchmark/benchmark.h"

long long int compute(const int limit) {

	/*
	 * - Uses Sieve of Eratosthenes to eliminate composite numbers
	 *   up to the limit.
	 * - The sieve tracks previously marked primes without increasing
	 *   the computation time unnecessarily. This allows the sieve to
	 *   jump ahead to the square of the current prime and
	 *   remove all the factors of the current prime.
	 */
	
	std::vector<int> prime(limit, true);
	for (long int i = 2; i * i <= limit; i++) {
		if (prime[i] == true) {
			for (long long int j = i * i; j <= limit; j += i) {
				prime[j] = false;
			}
		}
	}
	
	long long int sum = 0;
	for (int i = 2; i <= limit; i++) {
		if (prime[i] == true) {
			sum += i;
		}
	}

	return sum;

}

static void p010_bench(benchmark::State& state) {
	for (auto _ : state)
		benchmark::DoNotOptimize(compute(state.range(0)));
}

BENCHMARK(p010_bench)->RangeMultiplier(2)->Range(2'000'000, 8'000'000)->Unit(benchmark::kMillisecond);

int main(int argc, char** argv) {
	::benchmark::Initialize(&argc, argv);
	::benchmark::RunSpecifiedBenchmarks();
}

// Answer: 142913828922

// Run on (8 X 24.1208 MHz CPU s) ARM64
// -----------------------------------------------------------------------
// Benchmark                             Time             CPU   Iterations
// -----------------------------------------------------------------------
// p010_bench/2'000'000               2.83 ms         2.83 ms          245
// p010_bench_BigO                  O(N LogN)       O(N LogN)
