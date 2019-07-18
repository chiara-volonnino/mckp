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

    public static void printResult(int items, int[] profit, int[] weight, boolean[] isChosen) {
        StringBuilder result = new StringBuilder("Items chosen are: ");
        int profitTot = 0;
        int weightTot = 0;
        for (int n = 1; n <= items; n++) {
            if (isChosen[n]) {
                result.append(n).append(" ");
                profitTot += profit[n];
                weightTot += weight[n];
            }
        }
        result.append("with profit: ").append(profitTot).append(" and weight: ").append(weightTot);
        System.out.println(result);
    }
}
