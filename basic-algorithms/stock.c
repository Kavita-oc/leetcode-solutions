#include <stdio.h>

int main() {

    int prices[] = {7, 1, 5, 3, 6, 4};
    int size = 6;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < size; i++) {

        // Find the lowest price so far
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        // Calculate profit if we sell today
        int profit = prices[i] - minPrice;

        // Keep the maximum profit
        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    printf("Maximum Profit: %d\n", maxProfit);

    return 0;
}