#include <iostream>

#include "PrintMatrix.h"

using namespace std;

#define MAX_MATRIX_ITEMS 200

//int matrix[MAX_MATRIX_ITEMS][MAX_MATRIX_ITEMS] = {};

//template <size_t rows, size_t cols>
void printMatrix(int knapsackCapacity, int items, int profit[ARRAY_SIZE][ARRAY_SIZE])
{
    // showing the matrix on the screen
    for(int q = 0; q <= knapsackCapacity; ++q)
    {
        for(int k = 0; k < items; ++k)
        {
            //matrix[q][k] = 1;

            cout<<profit[q][k]; // display the current element out of the array
            printf("\t");
        }
    cout<<endl;  // when the inner loop is done, go to a new line
    }
}