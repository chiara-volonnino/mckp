package problem;

import model.ComputeSolutionImp;
import utils.PrintMatrix;

public class MultipleChoiceKnapsackProblem {

    private ComputeSolutionImp computeSolution;
    private int maxProfit = 0;

    public MultipleChoiceKnapsackProblem(final ComputeSolutionImp computeSolution) {
        this.computeSolution = computeSolution;
    }

    /**
     *
     */
    public void solveProblem() {
        int knapsackCapacity = computeSolution.getKnapsackCapacity();
        int[] profit = computeSolution.getItemProfit();
        int[] weight = computeSolution.getItemWeight();
        int[] classes = computeSolution.getItemClass();

        int items = profit.length - 1;
        int[][] matrix = new int[knapsackCapacity + 1][items + 1];
        boolean[][] solution = new boolean[knapsackCapacity + 1][items + 1];

        // Define q number in table
        for (int q = 0; q <= knapsackCapacity; q++) {
            matrix[q][0] = q;
        }

        // compute max profit for each object
        for (int q = 1; q <= knapsackCapacity; q++) {
            for (int k = 1; k <= items; k++) {
                int profitLast = computeSolution.getProfit(k,classes[k] - 1, matrix[q], classes);
                int profitCurrent = 0;
                if (weight[k] <= q) {
                    profitCurrent = profit[k] + computeSolution.getProfit( k,classes[k] - 1, matrix[q - weight[k]], classes);
                }
                matrix[q][k] = computeMaxProfit(profitLast, profitCurrent);
                updateMaxProfit(matrix[q][k]);
                solution[q][k] = computeSolution.getSolution(profitLast, profitCurrent);
            }
        }
        PrintMatrix.printMatrix(knapsackCapacity, items, matrix);
    }

    private void updateMaxProfit(final int newProfit) {
        if (newProfit > maxProfit) maxProfit = newProfit;
    }

    private int computeMaxProfit(final int profitLast, final int profitCurrent) {
        return Math.max(profitLast, profitCurrent);
    }
}
