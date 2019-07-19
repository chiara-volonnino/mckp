// include file.h once, and only once, in file.cpp. This is for incremented performance
#pragma once

#include "ComputeSolutionImp.h"
#include <vector>

using namespace std;

namespace problem
{

	using ComputeSolutionImp = model::ComputeSolutionImp;

	class OneOrNoneForClass : public ComputeSolutionImp
	{

	public:
		bool checkClass(int const items, int const last, vector<int> &classes) override;

		bool compute(int const items, int const object, int const q, vector<int> &classes, vector<vector<int>> &matrix) override;

		bool getSolution(int const profitLast, int const profitCurrent) override;

		int getProfit(int const items, int const itemClass, vector<int> &knapsackCapacity, vector<int> &classes) override;
	};
}
