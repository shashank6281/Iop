#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &rate);
    printf("Enter time period (in years): ");
    scanf("%f", &time);
    simpleInterest = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}
