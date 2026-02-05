#include <stdio.h>
int main() {
    int r, c;
    scanf("%d%d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int minIndex = 0;
    int minSum = 0;
    for (int j = 0; j < c; j++) {
        minSum += arr[0][j];
    }
    for (int i = 1; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            sum += arr[i][j];
        }
        if (sum < minSum) {
            minSum = sum;
            minIndex = i;
        }
    }

    printf("%d\n", minIndex);
    return 0;
}
