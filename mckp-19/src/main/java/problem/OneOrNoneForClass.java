package problem;

import model.ComputeSolutionImp;

public class OneOrNoneForClass extends ComputeSolutionImp {

    @Override
    public boolean checkClass(int items, int last, int[] classes) {
        return classes[items] == last;
    }

    @Override
    public boolean compute(int object, int q, int[] classes, int[][] matrix, int items) {
        int maxProfitForEachItem = 0;
        for (int k = 1; k <= items; k++) {
            if (classes[k] == classes[object] && matrix[q][k] > maxProfitForEachItem) {
                maxProfitForEachItem = matrix[q][k];
            }
        }
        return matrix[q][object] == maxProfitForEachItem;
    }

    @Override
    public boolean getSolution(int profitLast, int profitCurrent) {
        return profitCurrent > profitLast;
    }

    @Override
    public int getProfit(int itemClass, int[] knapsackCapacity, int[] classes, int items) {
        return 0;
    }
}
