#include <algorithm>
#include <iostream>
#include <vector>

#include "OneOrNoneForClass.h"
#include "PrintMatrix.h"

// C++ directive to declare the use of name of standard library
using namespace std;

int max_profit(const vector<vector<int>>& weight,
               const vector<vector<int>>& profit,
               int knapsackCapacity) {
    if (weight.empty())
        return 0;

    vector<int> profitLast(knapsackCapacity + 1, 0);
    for (int i = 0; i < weight[0].size(); ++i) {
        for(int k = weight[0].size(); k <= knapsackCapacity; ++k) {
            if (weight[0][i] <= knapsackCapacity)
            profitLast[weight[0][i]] = max(profitLast[weight[0][i]], profit[0][i]);    
        printf("k -- [%d]\t q -- [%d]\t class -- [%d]\t", i, k, 1);
        printf("profit tot----- [%d] \t", profitLast[weight[0][i]] = max(profitLast[weight[0][i]], profit[0][i]));
        printf("profit k----- [%d] \n", profit[0][i]);
        }
    }

    int matrix[10][10] = {1,3,5,6 ,8};
    printMatrix(10, 10, matrix);

    vector<int> profitCurrent(knapsackCapacity + 1);
    for (int i = 1; i < weight.size(); ++i) {
        // initialize vector with current value (init 0, and the the profit)  
        fill(profitCurrent.begin(), profitCurrent.end(), 0);
        for (int j = 0; j < weight[i].size(); ++j) {
            for (int k = weight[i][j]; k <= knapsackCapacity; ++k) {
                printf("k -- [%d]\t q -- [%d]\t class -- [%d]\t", j, k, i+1);
                if (profitLast[k - weight[i][j]] > 0)
                    profitCurrent[k] = max(profitLast[k - weight[i][j]] + profit[i][j], profitCurrent[k]);
                printf("tot profit -------- [%d]\t", profitCurrent[k] = max(profitLast[k - weight[i][j]] + profit[i][j], profitCurrent[k]));
                printf("last profit ----- [%d] \t", profitLast[k - weight[i][j]] + profit[i][j]);
                printf("current value ----- [%d] \n", profitCurrent[k]);
            }
        }
        // swap value and re-build
        swap(profitCurrent, profitLast);
    }
    
    // for (int i = 0; i < profitLast.size(); i++)
    //     {
    //     printf("q: %d\t%d\n", i, profitLast[i]);
    // }

    return *max_element(profitLast.begin(), profitLast.end());
}