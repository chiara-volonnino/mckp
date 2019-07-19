#pragma once // include file.h once, and only once, in file.cpp. This is for incremented performance

#include <vector>
#include <iostream>

using namespace std;

namespace utils
{

	class PrintMatrix
	{
	public:
		static void printMatrix(int knapsackCapacity, int items, vector<vector<int>> &matrix);

		static void printResult(int items, vector<int> &profit, vector<int> &weight, const vector<int> &isChosen);

		static void printTableOfResult(int items, vector<int> &profit, vector<int> &weight, vector<int> &classes, const vector<int> &isChosen);
	};

}
