#include <stdio.h>

int main() {
    char operator;
    double first, second;

    // Asking for input
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    // Switch-case to perform the calculation
    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", first, second, first + second);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", first, second, first - second);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", first, second, first * second);
            break;
        case '/':
            if (second != 0)
                printf("%.2lf / %.2lf = %.2lf\n", first, second, first / second);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Error! Operator is not correct.\n");
            break;
    }

    return 0;
}
