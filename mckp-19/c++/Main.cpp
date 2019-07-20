/**
 * Main class to run the project.
 */

#include "MultipleChoiceKnapsackProblem.h"
#include "OneOrNoneForClass.h"
#include "Error.h"
#include "Clock.h"

using namespace std;

using MultipleChoiceKnapsackProblem = problem::MultipleChoiceKnapsackProblem;
using OneOrNoneForClass = problem::OneOrNoneForClass;

int main(int argc, char const* argv[])
{
	clock_t time_req;

    time_req = clock();
	MultipleChoiceKnapsackProblem *multipleChoiceKnapsackProblem = new MultipleChoiceKnapsackProblem(new OneOrNoneForClass());
	multipleChoiceKnapsackProblem->solveProblem();
	time_req = clock() - time_req;
    cout << "\nCompute all project in " << (float)time_req/CLOCKS_PER_SEC << " seconds\n" << endl;

	return EXIT_SUCCESS;
}
