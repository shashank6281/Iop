#include <stdio.h>

int main() {
    float basic, hra, da, gross_salary;

    // Input basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basic);

    // Calculate HRA and DA based on basic salary
    if (basic <= 10000) {
        hra = basic * 0.2;
        da = basic * 0.8;
    } else if (basic <= 20000) {
        hra = basic * 0.25;
        da = basic * 0.9;
    } else {
        hra = basic * 0.3;
        da = basic * 0.95;
    }

    // Calculate gross salary
    gross_salary = basic + hra + da;

    // Output the gross salary
    printf("Gross Salary of the employee = %.2f\n", gross_salary);

    return 0;
}
