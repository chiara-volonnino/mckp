package problem;

import model.ComputeSolutionImp;

/**
 * 
 */
public class OneOrNoneForClass extends ComputeSolutionImp {

    @Override
    public boolean checkClass(final int items, final int last, final int[] classes) {
        return classes[items] == last;
    }

    @Override
    public boolean compute(final int items, final int object, final int q, final int[] classes, final int[][] matrix) {
        int maxProfitForEachItem = 0;
        for (int k = 1; k <= items; k++) {
            if (classes[k] == classes[object] && matrix[q][k] > maxProfitForEachItem) {
                maxProfitForEachItem = matrix[q][k];
            }
        }
        return matrix[q][object] == maxProfitForEachItem;
    }

    @Override
    public boolean getSolution(final int profitLast, final int profitCurrent) {
        return profitCurrent > profitLast;
    }

    @Override
    public int getProfit(final int items, final int itemClass, final int[] knapsackCapacity, final int[] classes) {
        int maxProfit = 0;
        for (int k = 1; k < items; k++) {
            if(classes[k] == itemClass && knapsackCapacity[k] > maxProfit) {
                maxProfit = knapsackCapacity[k];
            }
        }
        return maxProfit;
    }
}
