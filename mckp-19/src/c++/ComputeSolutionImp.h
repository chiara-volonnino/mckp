#pragma once

#include "ComputeSolution.h"
#include <vector>

using namespace std;

namespace model
{

	class ComputeSolutionImp : public ComputeSolution
	{

	private:
		int knapsackCapacity = 0;
		vector<int> profit;
		vector<int> weight;
		vector<int> classes;

	public:
		ComputeSolutionImp();

		virtual int getKnapsackCapacity();

		virtual vector<int> getItemProfit();

		virtual vector<int> getItemWeight();

		virtual vector<int> getItemClass();
	};

}
