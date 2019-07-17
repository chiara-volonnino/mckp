package model;

public abstract class ComputeSolutionImp implements ComputeSolution {
    private int knapsackCapacity;
    private int[] profit;
    private int[] weight;
    private int[] classes;

    ComputeSolutionImp() {
        this.knapsackCapacity = 3;
        /*, 8, 9, 6, 10, 50, 7, 2, 3, 6, 5*/
        this.profit = new int[]{0, 15, 11, 5, 8, 12, 18, 20, 14/*, 8, 9, 6, 10, 50, 7, 2, 3, 6, 5*/};
        this.weight = new int[]{0, 8, 4, 4, 3, 5, 14, 11, 5/*, 4, 6, 3, 5, 1, 5, 3, 2, 9, 7*/};
        this.classes = new int[]{0, 1, 1, 1, 1, 2, 2, 2, 2/*, 3, 3, 3, 3, 4, 4, 4, 5, 6, 6*/};
    }

    int getKnapsackCapacity() {
        return knapsackCapacity;
    }

    int[] getItemProfit() {
        return profit;
    }

    int[] getItemWeight() {
        return weight;
    }

    int[] getItemClass() {
        return classes;
    }
}
