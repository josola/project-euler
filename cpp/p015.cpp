/* 
 * Project Euler
 * Problem 15 - Lattice paths
 * (c) 2020-2022 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2020-2021
 */

#include "benchmark/benchmark.h"

long int compute(const int width, const int height) {

	/*
	 * - We are counting the number of paths that live on
	 *   the edge of each cell in the grid,  so we need to
	 *   add one element to each row and column.
	 */

	long int grid[height + 1][width + 1];

	/*
	 * - In a grid setting, each cell has as many paths
	 *   through it as the sum of the cell directly above
	 *   it and the cell directly behind it.
	 */

	for (int i = 0; i < width + 1; i++)
		grid[0][i] = 1;
	for (int i = 0; i < height + 1; i++)
		grid[i][0] = 1;

	for (int i = 1; i < height + 1; i++)
		for (int j = 1; j < width + 1; j++)
			grid[i][j] = grid[i - 1][j] + grid[i][j - 1];

	long int path_count = grid[height][width];

	return path_count;
	
}

static void p015_bench(benchmark::State& state) {
	for (auto _ : state)
		benchmark::DoNotOptimize(compute(20, 20));
}

BENCHMARK(p015_bench);

int main(int argc, char** argv) {
	benchmark::Initialize(&argc, argv);
	benchmark::RunSpecifiedBenchmarks();
}

// Answer: 137'846'528'820

// Run on (8 X 24.1203 MHz CPU s) ARM64
// -----------------------------------------------------------------------
// Benchmark                             Time             CPU   Iterations
// -----------------------------------------------------------------------
// p015_bench/20                      64.3 ns         64.3 ns      9681345
// p015_bench_BigO                       O(N)            O(N)
