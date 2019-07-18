#include <algorithm>
#include <iostream>
#include <vector>

#include "OneOrNoneForClass.h"

// C++ directive to declare the use of name of standard library
using namespace std;

int max_value(const vector<vector<int>>& weight,
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

int main(int argc, char const* argv[]) {

    vector<int> profit_class_1;
    profit_class_1.push_back(0);
    profit_class_1.push_back(15);
    profit_class_1.push_back(11);
    profit_class_1.push_back(5);
    profit_class_1.push_back(8);

    vector<int> weights_class_1;
    weights_class_1.push_back(0);
    weights_class_1.push_back(8);
    weights_class_1.push_back(4);
    weights_class_1.push_back(4);
    weights_class_1.push_back(3);

    vector<int> profit_class_2;
    profit_class_2.push_back(0);
    profit_class_2.push_back(12);
    profit_class_2.push_back(18);
    profit_class_2.push_back(20);
    profit_class_2.push_back(14);

    vector<int> weights_class_2;
    weights_class_2.push_back(0);
    weights_class_2.push_back(5);
    weights_class_2.push_back(14);
    weights_class_2.push_back(11);
    weights_class_2.push_back(5);

    vector<vector<int>> values;
    values.push_back(profit_class_1);
    values.push_back(profit_class_2);
    vector<vector<int>> weights;
    weights.push_back(weights_class_1);
    weights.push_back(weights_class_2);

    int knapsackCapacity = 50;

    printf("Solution with profit: %d\n", max_value(weights, values, knapsackCapacity));
    return 0;
}