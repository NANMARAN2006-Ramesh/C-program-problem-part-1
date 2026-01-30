#include <stdio.h>

int main() {
    int capacity;
    scanf("%d", &capacity);
    int n;
    scanf("%d", &n);

    int safeHours = 0;
    int failureCount = 0;
    int i = 0;

    while (i < n) {
        int load;
        scanf("%d", &load);

        if (load <= capacity) {
            safeHours++;
        } else {
            failureCount++;
        }

        i++;
    }

    printf("Safe Hours: %d\n", safeHours);
    printf("Failure Count: %d\n", failureCount);

    return 0;
}
