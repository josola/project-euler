/* 
 * Project Euler
 * Problem 9 - Special Pythagorean triplet
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <cmath>
#include <iostream>

#include "benchmark/benchmark.h"

int compute(const int target) {

	int a = 0;
	int b = 0;
	int c = 0;
	
	bool found = 0;
	for (a = 1; a < target; a++) {
		
		for (b = a; b < target; b++) {
			
			c = target - a - b;
			
			int first = pow(a, 2);
			int second = pow(b, 2);
			int third = pow(c, 2);
			
			if (first + second == third) {
				found = true;
				break;
			}

		}
		
		if (found)
			break;
		
	}

	return a * b * c;

}

static void p009_bench(benchmark::State& state) {
	for (auto _ : state)
		benchmark::DoNotOptimize(compute(1'000));
}

BENCHMARK(p009_bench)->Repetitions(10)->Unit(benchmark::kMicrosecond);

int main(int argc, char** argv) {
	::benchmark::Initialize(&argc, argv);
	::benchmark::RunSpecifiedBenchmarks();
}

// Answer: 31875000

// Run on (8 X 24.1203 MHz CPU s)
// -----------------------------------------------------------------------
// Benchmark                             Time             CPU   Iterations
// -----------------------------------------------------------------------
// p009_bench/1'000                     134 us           134 us         10
// p009_bench_BigO                       O(N)             O(N)
