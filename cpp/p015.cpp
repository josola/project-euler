/* 
 * Project Euler
 * Problem 15 - Lattice paths
 * (c) 2020-2021 Jordan Sola. All rights reserved. (MIT License)
 */

#include <iostream>
#include <cmath>

#include "benchmark/benchmark.h"

long int compute(const int width, const int height) {
	
	long int grid[height + 1][width + 1];

	/*
	 * In a grid setting, each cell has as many
	 * paths through it as the sum of the cell
	 * directly above and the cell directly behind.
	 */

	for (int i = 0; i < width + 1; i++)
		grid[0][i] = 1;
	for (int i = 0; i < height + 1; i++)
		grid[i][0] = 1;

	for (int i = 1; i < height + 1; i++)
		for (int j = 1; j < width + 1; j++)
			grid[i][j] = grid[i - 1][j] + grid[i][j - 1];

	return grid[height][width];
	
}

static void p015_bench(benchmark::State& state) {
	for (auto _ : state)
		benchmark::DoNotOptimize(compute(20, 20));
}

BENCHMARK(p015_bench)->Repetitions(10);

int main(int argc, char** argv) {
	benchmark::Initialize(&argc, argv);
	benchmark::RunSpecifiedBenchmarks();
}

// Answer: 137846528820

// Run on (8 X 24.1203 MHz CPU s)
// -----------------------------------------------------------------------
// Benchmark                             Time             CPU   Iterations
// -----------------------------------------------------------------------
// p015_bench/20                      64.3 ns         64.3 ns      9681345
// p015_bench_BigO                       O(N)            O(N)
