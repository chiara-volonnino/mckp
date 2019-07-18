#ifndef PRINT_MATRIX_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define PRINT_MATRIX_H

#include <algorithm>
#include <iostream>
#include <vector>


template <size_t rows, size_t cols>
void printMatrix(int knapsackCapacity, int items, int profit[rows][cols]);

#endif