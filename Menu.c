#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;
    printf("--- MENU ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    scanf("%lf %lf", &num1, &num2);
    }
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Sum = %.2lf\n", result);
            break;
            
        case 2:
            result = num1 - num2;
            printf("Difference = %.2lf\n", result);
            break;
            
        case 3:
            result = num1 * num2;
            printf("Product = %.2lf\n", result);
            break;
            
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Quotient = %.2lf\n", result);
            } else {
                printf("Error: Cannot divide by zero.\n");
            }
            break;
            
        default:
            printf("Error: Invalid choice.\n");

            
    return 0;
    }


