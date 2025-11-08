// Lokesh Lavate,UIN:-251P083,YEAR:-F.E,DIV.D
#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

start:
    printf("\n=== MENU DRIVEN CALCULATOR ===\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 5) {
        printf("Exiting the program. Goodbye!\n");
        return 0;
    }

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;
        case 4:
            if (num2 == 0)
                printf("Error! Division by zero is not allowed.\n");
            else {
                result = num1 / num2;
                printf("Result = %.2f\n", result);
            }
            break;
        default:
            printf("Invalid choice! Please try again.\n");
            break;
    }

    printf("\nDo you want to perform another operation? (1 = Yes / 0 = No): ");
    int again;
    scanf("%d", &again);
    if (again == 1)
        goto start; 
    else
        printf("Thank you for using the calculator!\n");

    return 0;
}