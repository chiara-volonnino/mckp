#ifndef ONE_OR_NONE_FOR_CLASS_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define ONE_OR_NONE_FOR_CLASS_H

#define MAX_VECTOR 100

#include <algorithm>
#include <iostream>
#include <vector>

// C++ directive to declare the use of name of standard library
using namespace std;

int max_profit(const vector<vector<int>> &weight,
               const vector<vector<int>> &profit,
               int knapsackCapacity);

#endif