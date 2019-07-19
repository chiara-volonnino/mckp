/**
 * Main class to run the project.
 */

#include "MultipleChoiceKnapsackProblem.h"
#include "OneOrNoneForClass.h"
#include "Error.h"

using namespace std;

using MultipleChoiceKnapsackProblem = problem::MultipleChoiceKnapsackProblem;
using OneOrNoneForClass = problem::OneOrNoneForClass;

int main(int argc, char const* argv[])
{
	MultipleChoiceKnapsackProblem *multipleChoiceKnapsackProblem = new MultipleChoiceKnapsackProblem(new OneOrNoneForClass());
	multipleChoiceKnapsackProblem->solveProblem();

	return EXIT_SUCCESS;
}
