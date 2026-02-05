#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int max = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            for (int k = i + 1; k < r; k++) { 
                for (int l = 0; l < c; l++) {
                    int product = arr[i][j] * arr[k][l];
                    if (product > max) {
                        max = product;
                    }
                }
            }
        }
    }
    printf("%d\n", max);
    return 0;
}
