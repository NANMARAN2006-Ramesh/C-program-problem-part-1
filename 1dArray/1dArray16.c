#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int prices[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }
    int minPrice = prices[0];
    int maxDiff = prices[1] - prices[0];  
    for (int i = 1; i < n; i++) {
        int currentDiff = prices[i] - minPrice;
        if (currentDiff > maxDiff) {
            maxDiff = currentDiff;
        }
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
    }

    printf("Maximum difference (profit/loss): %d\n", maxDiff);

    return 0;
}
