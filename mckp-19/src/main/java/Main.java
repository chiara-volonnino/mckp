import problem.MultipleChoiceKnapsackProblem;
import problem.OneOrNoneForClass;

public class Main {
    public static void main(String[] args) {
        MultipleChoiceKnapsackProblem multipleChoiceKnapsackProblem = new MultipleChoiceKnapsackProblem(new OneOrNoneForClass());
        multipleChoiceKnapsackProblem.solveProblem();
    }
}
