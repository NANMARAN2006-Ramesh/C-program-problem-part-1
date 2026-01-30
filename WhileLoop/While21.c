#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int i = 0;
    while (i < n) {
        scanf("%d", &arr[i]);
        i++;
    }
    int congestionMinutes = 0;
    int longestStreak = 0;
    int currentStreak = 0;
    i = 0;
    while (i < n) {
        if (arr[i] > 20) {
            congestionMinutes++;
            currentStreak++;
            if (currentStreak > longestStreak) {
                longestStreak = currentStreak;
            }
        } else {
            currentStreak = 0; 
        }
        i++;
    }
    printf("Congestion Minutes: %d\n", congestionMinutes);
    printf("Longest Congestion Streak: %d\n", longestStreak);

    return 0;
}
