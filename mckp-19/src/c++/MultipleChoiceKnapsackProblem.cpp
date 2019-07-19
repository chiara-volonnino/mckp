#include <algorithm>
#include <iostream>
#include <vector>

#include "MultipleChoiceKnapsackProblem.h"
#include "ComputeSolutionImp.h"
#include "PrintMatrix.h"
#include "RectangularVectors.h"

using namespace std;

namespace problem
{
	using ComputeSolutionImp = model::ComputeSolutionImp;
	using PrintMatrix = utils::PrintMatrix;

	MultipleChoiceKnapsackProblem::MultipleChoiceKnapsackProblem(ComputeSolutionImp *const computeSolution)
	{
		this->computeSolution = computeSolution;
	}

	void MultipleChoiceKnapsackProblem::solveProblem()
	{
		int knapsackCapacity = computeSolution->getKnapsackCapacity();
		vector<int> profit = computeSolution->getItemProfit();
		vector<int> weight = computeSolution->getItemWeight();
		vector<int> classes = computeSolution->getItemClass();

		int items = profit.size() - 1;
		vector<vector<int>> matrix = RectangularVectors::RectangularIntVector(knapsackCapacity + 1, items + 1);
		vector<vector<bool>> solution = RectangularVectors::RectangularBoolVector(knapsackCapacity + 1, items + 1);

		// Define q number in table
		for (int q = 0; q <= knapsackCapacity; q++)
		{
			matrix[q][0] = q;
		}

		// compute max profit for each object
		for (int q = 1; q <= knapsackCapacity; q++)
		{
			for (int k = 1; k <= items; k++)
			{
				int profitLast = computeSolution->getProfit(k,classes[k] - 1, matrix[q], classes);
				int profitCurrent = 0;
				if (weight[k] <= q)
				{
					profitCurrent = profit[k] + computeSolution->getProfit(k,classes[k] - 1, matrix[q - weight[k]], classes);
				}
				matrix[q][k] = computeMaxProfit(profitLast, profitCurrent);
				updateMaxProfit(matrix[q][k]);
				solution[q][k] = computeSolution->getSolution(profitLast, profitCurrent);
			}
		}
		PrintMatrix::printMatrix(knapsackCapacity, items, matrix);
		
		//printf(isInSolution(items, knapsackCapacity, solution, classes, matrix, weight));
		PrintMatrix::printResult(items, profit, weight, isInSolution(items, knapsackCapacity, solution, classes, matrix, weight));
		//Debug table
		//PrintMatrix::printTableOfResult(items, profit, weight, classes, isInSolution(items, knapsackCapacity, solution, classes, matrix, weight));
	}

	void MultipleChoiceKnapsackProblem::updateMaxProfit(int const newProfit)
	{
		if (newProfit > maxProfit)
		{
			maxProfit = newProfit;
		}
	}

	int MultipleChoiceKnapsackProblem::computeMaxProfit(int const profitLast, int const profitCurrent)
	{
		return max(profitLast, profitCurrent);
	}

	vector<int> MultipleChoiceKnapsackProblem::isInSolution(int const item, int const knapsackCapacity, const vector<vector<bool>> &solution, 
																vector<int> &classes, vector<vector<int>> &matrix, const vector<int> &weight)
	{
		int lastSolution = 0;
		vector<int> vectorOfSolution(item + 1);
		for (int k = item, q = knapsackCapacity; k > 0; k--)
		{
			if (solution[q][k] && computeSolution->compute(item, k, q, classes, matrix))
			{
				if (computeSolution->checkClass(k, lastSolution, classes))
				{
					continue;
				}
				q = q - weight[k];
				lastSolution = classes[k];
				vectorOfSolution[k] = 1;
			}
			else
			{
				vectorOfSolution[k] = 0;
			}
		}
		return vectorOfSolution;
	}
}
