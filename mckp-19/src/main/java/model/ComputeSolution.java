package model;

public interface ComputeSolution {

    boolean checkClass(final int items, final int last, final int[] classes);

    boolean compute(final int items, final int object, final int q, final int[] classes, final int[][] matrix);

    boolean getSolution(final int profitLast, final int profitCurrent);

    int getProfit(final int items, final int itemClass, final int[] knapsackCapacity, final int[] classes);
}
