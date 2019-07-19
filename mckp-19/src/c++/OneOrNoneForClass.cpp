/**
 * This class permit the choice of an element for each class. Then it deals 
 * with implementing and managing the variant of the MCKP in which one can 
 * choose or not an element by class.
 */

#include "OneOrNoneForClass.h"

using namespace std;

namespace problem
{
	using ComputeSolutionImp = model::ComputeSolutionImp;

	bool OneOrNoneForClass::checkClass(int const items, int const last, vector<int> &classes)
	{
		return classes[items] == last;
	}

	bool OneOrNoneForClass::compute(int const items, int const object, int const q, vector<int> &classes, vector<vector<int>> &matrix)
	{
		int maxProfitForEachItem = 0;
		for (int k = 1; k <= items; k++)
		{
			if (classes[k] == classes[object] && matrix[q][k] > maxProfitForEachItem)
			{
				maxProfitForEachItem = matrix[q][k];
			}
		}
		return matrix[q][object] == maxProfitForEachItem;
	}

	bool OneOrNoneForClass::getSolution(int const profitLast, int const profitCurrent)
	{
		return profitCurrent > profitLast;
	}

	int OneOrNoneForClass::getProfit(int const items, int const itemClass, vector<int> &knapsackCapacity, vector<int> &classes)
	{
		int maxProfit = 0;
		for (int k = 1; k < items; k++)
		{
			if (classes[k] == itemClass && knapsackCapacity[k] > maxProfit)
			{
				maxProfit = knapsackCapacity[k];
			}
		}
		return maxProfit;
	}
}
