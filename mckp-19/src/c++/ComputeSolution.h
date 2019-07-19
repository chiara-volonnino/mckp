#include <vector>

// C++ directive to declare the use of name of standard library
using namespace std;

namespace model
{

	class ComputeSolution
	{

	public:
		virtual bool checkClass(int const items, int const last, vector<int> &classes) = 0;

		virtual bool compute(int const items, int const object, int const q, vector<int> &classes, vector<vector<int>> &matrix) = 0;

		virtual bool getSolution(int const profitLast, int const profitCurrent) = 0;

		virtual int getProfit(int const items, int const itemClass, vector<int> &knapsackCapacity, vector<int> &classes) = 0;
	};

}
