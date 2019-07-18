#include <algorithm>
#include <iostream>
#include <vector>

#include "OneOrNoneForClass.h"

// C++ directive to declare the use of name of standard library
using namespace std;

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

    printf("Solution with profit: %d\n", max_profit(weights, values, knapsackCapacity));
    return 0;
}