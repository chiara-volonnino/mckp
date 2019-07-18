package problem;

import model.ComputeSolutionImp;

public class OneOrNoneForClass extends ComputeSolutionImp {

    @Override
    public boolean checkClass(int items, int last, int[] classes) {
        return false;
    }

    @Override
    public boolean compute(int object, int weight, int[] classes, int[][] matrix, int items) {
        return false;
    }

    @Override
    public boolean getSolution(int profitLast, int profitCurrent) {
        return false;
    }

    @Override
    public int getProfit(int itemClass, int[] knapsackCapacity, int[] classes, int items) {
        return 0;
    }
}
