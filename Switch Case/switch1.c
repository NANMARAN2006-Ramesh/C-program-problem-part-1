#include <stdio.h>

int main() {
    int c;
    int unit;
    int bill = 0; // Initialize bill to 0
    scanf("%d", &c);
    printf("1. Domestic connection\n");
    printf("2. Commercial connection\n");
    printf("Enter choice: ");

    printf("How many units are used: ");
    scanf("%d", &unit);

    switch((c)) {
        case 1: 
            if (unit <= 100) {
                bill = unit * 3;
            } else {
                bill = (100 * 3) + (unit - 100) * 5;
                bill = bill - (unit * 1); 
            }
            printf("Total Bill (Domestic): RS %d\n", bill);
            break;

        case 2: 
            if (unit <= 100) {
                bill = unit * 6;
            } 
            else {
                bill = (100 * 6) + (unit - 100) * 8;
            }
            printf("Total Bill (Commercial): RS %d\n", bill);
            break;

        default:
            printf("Invalid selection! Please choose 1 or 2.\n");
            break;
    }

    return 0;
}