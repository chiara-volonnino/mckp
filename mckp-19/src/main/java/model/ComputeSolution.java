package model;

public interface ComputeSolution {

    boolean checkClass(int items, int last, int[] classes);

    boolean compute(int object, int weight, int[] classes, int[][] matrix, int items);

    boolean getSolution(int profitLast, int profitCurrent);

    int getProfit(int itemClass, int[] knapsackCapacity, int[] classes, int items);
}
