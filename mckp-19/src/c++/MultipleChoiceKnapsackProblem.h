#pragma once

#include <vector>

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
		// virtual ~MultipleChoiceKnapsackProblem()
		// {
		// 	delete computeSolution;
		// }

		MultipleChoiceKnapsackProblem(ComputeSolutionImp *const computeSolution);

		/**
		 *
		 */
		virtual void solveProblem();

	private:
		void updateMaxProfit(int const newProfit);

		int computeMaxProfit(int const profitLast, int const profitCurrent);

		vector<bool> chosenItem(int const item, int const knapsackCapacity, vector<vector<bool>> &solution, vector<int> &classes, vector<vector<int>> &matrix, vector<int> &weight);

		vector<int> isInSolution(int const item, int const knapsackCapacity, vector<vector<bool>> &solution, vector<int> &classes, vector<vector<int>> &matrix, vector<int> &weight);
	};

}
