package model;

public abstract class ComputeSolutionImp implements ComputeSolution {

    private int knapsackCapacity;
    private int[] profit;
    private int[] weight;
    private int[] classes;

    public ComputeSolutionImp() {
        this.knapsackCapacity = 3;
        this.profit = new int[]{0, 15, 11, 5, 8, 12, 18, 20, 14/*, 8, 9, 6, 10, 50, 7, 2, 3, 6, 5*/};
        this.weight = new int[]{0, 8, 4, 4, 3, 5, 14, 11, 5/*, 4, 6, 3, 5, 1, 5, 3, 2, 9, 7*/};
        this.classes = new int[]{0, 1, 1, 1, 1, 2, 2, 2, 2/*, 3, 3, 3, 3, 4, 4, 4, 5, 6, 6*/};
    }

    public int getKnapsackCapacity() {
        return knapsackCapacity;
    }

    public int[] getItemProfit() {
        return profit;
    }

    public int[] getItemWeight() {
        return weight;
    }

    public int[] getItemClass() {
        return classes;
    }
}
