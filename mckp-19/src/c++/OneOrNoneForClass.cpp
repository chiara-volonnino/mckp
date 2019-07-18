#include <algorithm>
#include <iostream>
#include <vector>

#include "OneOrNoneForClass.h"

// C++ directive to declare the use of name of standard library
using namespace std;

int max_profit(const vector<vector<int>>& weight,
               const vector<vector<int>>& profit,
               int knapsackCapacity) {
    if (weight.empty())
        return 0;

    vector<int> last(knapsackCapacity + 1, 0);
    for (int i = 1; i < weight[0].size(); ++i) {
        if (weight[0][i] <= knapsackCapacity)
            last[weight[0][i]] = max(last[weight[0][i]], profit[0][i]);    
        //printf("value----- [%d] \n", last[weight[0][i]] = max(last[weight[0][i]], value[0][i]));
    }

    vector<int> current(knapsackCapacity + 1);
    for (int i = 1; i < weight.size(); ++i) {
        // initialize vector with current value (init 0, and the the profit)  
        fill(current.begin(), current.end(), 0);
        for (int j = 0; j < weight[i].size(); ++j) {
            for (int k = weight[i][j]; k <= knapsackCapacity; ++k) {
                printf("q----- [%d] \t",k);
                if (last[k - weight[i][j]] > 0)
                    current[k] = max(last[k - weight[i][j]] + profit[i][j], current[k]);
                printf("last value ----- [%d] \t", last[k - weight[i][j]] + profit[i][j]);
                printf("current value ----- [%d] \n", current[k]);
            }
        }
        // swap value and re-build
        swap(current, last);
    }
    
//    for (int i = 0; i < current.size(); i++)
//    {
//        printf("q: %d\t%d\n", i, last[i]);
//    }

    return *max_element(last.begin(), last.end());
}