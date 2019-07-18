#include "PrintMatrix.h"

using namespace std;

namespace utils
{

	void PrintMatrix::printMatrix(int knapsackCapacity, int items, vector<vector<int>> &matrix)
	{
		for (int q = 0; q <= knapsackCapacity; q++)
		{
			for (int k = 0; k <= items; k++)
			{
				cout<<matrix[q][k];
				printf("\t");
			}
			wcout << endl;
		}
	}

	void PrintMatrix::printResult(int items, vector<int> &profit, vector<int> &weight, vector<int> &isChosen)
	{
		StringBuilder *result = new StringBuilder(L"Items chosen are: ");
		int profitTot = 0;
		int weightTot = 0;
		for (int n = 1; n <= items; n++)
		{
			if (isChosen[n] == 0)
			{
				result->append(n)->append(L" ");
				profitTot += profit[n];
				weightTot += weight[n];
			}
		}
		result->append(L"with profit: ")->append(profitTot)->append(L" and weight: ")->append(weightTot);
		wcout << result << endl;

		delete result;
	}

	void PrintMatrix::printTableOfResult(int items, vector<int> &profit, vector<int> &weight, vector<int> &classes, vector<int> &isChosen)
	{
		wcout << L"item" << L"\t" << L"profit" << L"\t" << L"weight" << L"\t" << L"class" << L"\t" << L"chosen" << endl;
		for (int k = 1; k <= items; k++)
		{
			wcout << k << L"\t\t" << profit[k] << L"\t\t" << weight[k] << L"\t\t" << classes[k] << L"\t\t" << isChosen[k] << endl;
		}
	}
}
