#include <stdio.h>

int SumOfDigit(int p) {
    int sum = 0;
    while (p > 0) {
        sum = sum + (p % 10);  
        p = p / 10; 
    }
    return sum;
}

int main() {
    int p;
    printf("Enter the value: ");
    scanf("%d", &p);
    int total = SumOfDigit(p);
    printf("The sum of the digits: %d\n", total);
    return 0;
}
