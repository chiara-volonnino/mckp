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

	void PrintMatrix::printResult(int items, vector<int> &profit, vector<int> &weight, const vector<int> &isChosen)
	{
		printf("Items chosen are: ");
		int profitTot = 0;
		int weightTot = 0;
		for (int n = 1; n <= items; n++)
		{
			if (isChosen[n] == 1)
			{
				printf("%d, ", n);
				profitTot += profit[n];
				weightTot += weight[n];
			}
		}
		printf(" with profit: %d and weight: %d\n", profitTot, weightTot);
	}

	void PrintMatrix::printTableOfResult(int items, vector<int> &profit, vector<int> &weight, vector<int> &classes, const vector<int> &isChosen)
	{
		wcout << L"\nItem" << L"\t" << L"Profit" << L"\t" << L"Weight" << L"\t" << L"Class" << L"\t" << L"Chosen" << endl;
		for (int k = 1; k <= items; k++)
		{
			wcout << k << L"\t" << profit[k] << L"\t" << weight[k] << L"\t" << classes[k] << L"\t" << isChosen[k] << L"\n" << endl;
		}
	}
}
