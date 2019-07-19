/**
 * Utils class that helper class reproduces the array initialization.
 */

#include <algorithm>
#include <iostream>
#include <vector>

// C++ directive to declare the use of name of standard library
using namespace std;

class VectorUtils
{
public:
    static vector<vector<int>> IntVector(int size1, int size2)
    {
        vector<vector<int>> newVector(size1);
        for (int vector1 = 0; vector1 < size1; vector1++)
        {
            newVector[vector1] = vector<int>(size2);
        }

        return newVector;
    }

    static vector<vector<bool>> BoolVector(int size1, int size2)
    {
        vector<vector<bool>> newVector(size1);
        for (int vector1 = 0; vector1 < size1; vector1++)
        {
            newVector[vector1] = vector<bool>(size2);
        }

        return newVector;
    }
};