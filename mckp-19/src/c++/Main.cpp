#include "Main.h"
#include "MultipleChoiceKnapsackProblem.h"
#include "OneOrNoneForClass.h"

using namespace std;

using MultipleChoiceKnapsackProblem = problem::MultipleChoiceKnapsackProblem;
using OneOrNoneForClass = problem::OneOrNoneForClass;

int main(int argc, char const* argv[])
{
	MultipleChoiceKnapsackProblem *multipleChoiceKnapsackProblem = new MultipleChoiceKnapsackProblem(new OneOrNoneForClass());
	multipleChoiceKnapsackProblem->solveProblem();

	//delete multipleChoiceKnapsackProblem;
	return 0;
}
