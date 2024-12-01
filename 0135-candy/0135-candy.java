class Solution {
    public int candy(int[] ratings) {
int n = ratings.length;

        // Special case: if there is only one child
        if (n == 1) return 1;

        int totalCandies = n; // Start with 1 candy for the first child
        int up = 0, down = 0, peak = 0;

        for (int i = 1; i < n; i++) {
                        // System.out.println(totalCandies + " candies for rating " + ratings[i-1]);

            if (ratings[i] > ratings[i - 1]) {
                // Increasing sequence
                up++;
                peak = up; // Update the peak
                down = 0; // Reset the down sequence
                totalCandies += up;
            } else if (ratings[i] < ratings[i - 1]) {
                // Decreasing sequence
                up = 0; // Reset the up sequence
                totalCandies += down; // for nth down previous n-1 student geting candies
                down++;

                // Adjust if the down sequence is longer than the peak
                if (down > peak) {
                    totalCandies++;
                }

            } else {
                // Flat ratings: reset both sequences
                up = down = 0;
                peak = 0;
            }
        }

        return totalCandies;
    }
}