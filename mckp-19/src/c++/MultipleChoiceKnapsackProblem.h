// include file.h once, and only once, in file.cpp. This is for incremented performance
#pragma once

#include <vector>

// C++ directive to declare the use of name of standard library
using namespace std;

namespace model { class ComputeSolutionImp; }

namespace problem
{

	using ComputeSolutionImp = model::ComputeSolutionImp;

	class MultipleChoiceKnapsackProblem
	{

	private:
		ComputeSolutionImp *computeSolution;
		int maxProfit = 0;

	public:
	
		MultipleChoiceKnapsackProblem(ComputeSolutionImp *const computeSolution);

		virtual void solveProblem();

	private:
		void updateMaxProfit(int const newProfit);

		int computeMaxProfit(int const profitLast, int const profitCurrent);

		vector<int> isInSolution(int const item, int const knapsackCapacity, const vector<vector<bool>> &solution, 
									vector<int> &classes, vector<vector<int>> &matrix, const vector<int> &weight);
	};

}
