#include <stdio.h>

int main() {
    int fuel;
    scanf("%d", &fuel);
    int num;
    scanf("%d", &num);

    int count = 0;
    while (num--) {
        int tripFuel;
        scanf("%d", &tripFuel);

        if (fuel >= tripFuel) {
            fuel -= tripFuel;   
            count++;           
        } else {
            break;              
        }
    }

    printf("Completed Trips: %d\n", count);
    printf("Remaining Fuel: %d\n", fuel);

    return 0;
}
