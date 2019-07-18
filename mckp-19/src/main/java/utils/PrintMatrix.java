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

    public static void printTableOfResult(int items, int[] profit, int[] weight, int[] classes, boolean[] isChosen) {
        System.out.println("item" + "\t" + "profit" + "\t" + "weight" + "\t" + "class" + "\t" + "chosen");
        for (int k = 1; k <= items; k++) {
            System.out.println(k + "\t\t" + profit[k] + "\t\t" + weight[k] + "\t\t" + classes[k] + "\t\t" + isChosen[k]);
        }
    }
}
