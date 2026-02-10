#include <stdio.h>

int factorial(int p) {
    int fact = 1;
    for(int i=1;i<=p;i++){
        fact = fact*i;
    }
    return fact;
}

int main() {
    int p;
    printf("Enter the value: ");
    scanf("%d", &p);
    int result = factorial(p);
    printf("The factorial of the number is : %d\n",result);
    return 0;
}
