#include <stdio.h>

int main() {
    char operator;
    float num1, num2;

    // Input from user to enter an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Input from the user for the two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            printf("The result is: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("The result is: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("The result is: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("The result is: %.2f\n", num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }

    return 0;
}
