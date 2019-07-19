#include "ComputeSolutionImp.h"

// C++ directive to declare the use of name of standard library
using namespace std;

namespace model
{

	ComputeSolutionImp::ComputeSolutionImp()
	{
		this->knapsackCapacity = 15;
		this->profit = vector<int>{0, 15, 11, 5, 8, 12, 18, 20, 14};
		this->weight = vector<int>{0, 8, 4, 4, 3, 5, 14, 11, 5};
		this->classes = vector<int>{0, 1, 1, 1, 1, 2, 2, 2, 2};
	}

	int ComputeSolutionImp::getKnapsackCapacity()
	{
		return knapsackCapacity;
	}

	vector<int> ComputeSolutionImp::getItemProfit()
	{
		return profit;
	}

	vector<int> ComputeSolutionImp::getItemWeight()
	{
		return weight;
	}

	vector<int> ComputeSolutionImp::getItemClass()
	{
		return classes;
	}
}
