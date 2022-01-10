/* Project Euler
 * Problem 21 - Amicable numbers
 * (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021 */

#include <vector>

#include "benchmark/benchmark.h"

int compute(const int TARGET) {
	
	std::vector<int> amicable_pairs = {};
	
	// Find amicable numbers within set {220, ... TARGET}
	
	int sum = 0;
	for (int num_a = 220; num_a <= TARGET; num_a++) {
		
		// Sum of proper divisors for current iteration [num_a]
		int div_a = 0;
		for (int i = 1; i < num_a; i++) {
			if (num_a % i == 0)
				div_a += i;
		}
		
		/* - Sum of proper divisors for current iteration's sum of proper divisors
		   - This is checked against the current iteration to determine whether
		     sum_a and the current iteration are amicable pairs */
		
		int div_b = 0;
		for (int i = 1; i < div_a; i++) {
			if (div_a % i == 0)
				div_b += i;
		}
		
		// Perform amicability check against previous amicable pairs
		if (num_a == div_b && div_a != div_b) {
			
			// Check for previously added amicable numbers to avoid duplication
			bool duplicate = false;
			for (auto i : amicable_pairs) {
				if (i == div_a) {
					duplicate = true;
					break;
				}
			}
			
			if (!duplicate) {
				amicable_pairs.push_back(num_a);
				amicable_pairs.push_back(div_a);
				sum += num_a + div_a;
			}
			
		}
	}
	
	return sum;
}

static void p021_bench(benchmark::State& state) {
	for (auto _ : state)
		benchmark::DoNotOptimize(compute(10'000));
}

BENCHMARK(p021_bench)->Unit(benchmark::kMillisecond);

int main(int argc, char** argv) {
	benchmark::Initialize(&argc, argv);
	benchmark::RunSpecifiedBenchmarks();
}

// Answer: 31'626

/* Run on (8 X 24.1214 MHz CPU s) ARM64
   -------------------------------------------------------
   Benchmark             Time             CPU   Iterations
   -------------------------------------------------------
   p021_bench         52.0 ms         52.0 ms           11
   p021_BigO                ?               ?              */
