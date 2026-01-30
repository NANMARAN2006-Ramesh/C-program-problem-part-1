#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);   
    int attempt = 0;
    int totalFailures = 0;
    int consecutiveFailures = 0;
    int lockAttempt = -1;
    while (attempt < n) {
        int login;
        scanf("%d", &login);
        attempt++;
        if (login == 0) {
            totalFailures++;
            consecutiveFailures++;
        } else {
            consecutiveFailures = 0; 
        } 
        if (consecutiveFailures == 3 && lockAttempt == -1) {
            lockAttempt = attempt; 
        }
    }
    if (lockAttempt == -1) {
        printf("Lock Triggered At Attempt: Not Locked\n");
        printf("Total Failed Attempts: %d\n", totalFailures);
    } else {
        printf("Lock Triggered At Attempt: %d\n", lockAttempt);
        printf("Total Failed Attempts: %d\n", totalFailures);
    }
    return 0;
}
