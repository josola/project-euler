/* 
 * Project Euler
 * Problem 20 - Factorial digit sum
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021
 */

#include <string>

#include "benchmark/benchmark.h"

int compute(const int TARGET) {
	
	/*
	Set the upper bound, lower bound, and step amount
	for the factorial calcuation loop.
	*/
	
	const int CEIL = TARGET;
	const int FLOOR = 1;
	const int INCR = 1;
	
	/*
	Compute factorial from FLOOR to CIEL using
	INCR as the step amount.
	*/
	
	std::string str_factorial = std::to_string(FLOOR);
	
	for (int i = FLOOR + INCR; i <= CEIL; i += INCR) {
		
		/*
		Perform string arithmetic on two integers
		within factorial calculation.
		*/
		
		// Convert iterator and factorial from integer to string
		std::string str_i = std::to_string(i);
		std::string product(str_i.size() + str_factorial.size(), 0);
		
		// Perform string multiplication
		for (int j = str_i.size() - 1; j >= 0; j--) {
			for (int k = str_factorial.size() - 1; k >= 0; k--) {
				int n = (str_i[j] - '0') * (str_factorial[k] - '0') + product[j + k + 1];
				product[j + k + 1] = n % 10;
				product[j + k] += n / 10;
			}
		}
		
		// Convert string digits from ASCII values to integer representations
		for (int j = 0; j < product.size(); j++)
			product[j] += '0';
		
		str_factorial = product;
		
	}
	
	// Add digits of factorial
	
	int output = 0;
	for (int i = str_factorial.size() - 1; i >= 0; i--)
		output += str_factorial[i] - '0';
	
	return output;
	
}

static void p020_bench(benchmark::State& state) {
	for (auto _ : state)
		benchmark::DoNotOptimize(compute(100));
}

BENCHMARK(p020_bench)->Unit(benchmark::kMicrosecond);

int main(int argc, char** argv) {
	benchmark::Initialize(&argc, argv);
	benchmark::RunSpecifiedBenchmarks();
}

// Answer: 648

// Run on (8 X 24.1216 MHz CPU s)
// -----------------------------------------------------
// Benchmark           Time             CPU   Iterations
// -----------------------------------------------------
// p020_bench       98.9 us         98.8 us         6043
// p020_bench_BigO     O(N)            O(N)
