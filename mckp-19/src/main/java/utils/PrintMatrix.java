package utils;

public class PrintMatrix {
    public static void printMatrix(int knapsackCapacity, int items, int[][] matrix) {
        for (int q = 0; q <= knapsackCapacity; q++) {
            for (int k = 0; k <= items; k++) {
                System.out.format("%5d ", matrix[q][k]);
            }
            System.out.println();
        }
    }
}
