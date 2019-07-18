#pragma once

#include <vector>
#include <iostream>
#include "stringbuilder.h"

using namespace std;

namespace utils
{

	class PrintMatrix
	{
	public:
		static void printMatrix(int knapsackCapacity, int items, vector<vector<int>> &matrix);

		static void printResult(int items, vector<int> &profit, vector<int> &weight, vector<int> &isChosen);

		static void printTableOfResult(int items, vector<int> &profit, vector<int> &weight, vector<int> &classes, vector<int> &isChosen);
	};

}
