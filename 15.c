#include <stdio.h>

int main() {
    float subject1, subject2, subject3, subject4, subject5;
    float total, percentage;
    char division[20];

    // Input marks of five subjects
    printf("Enter the marks of five subjects: ");
    scanf("%f %f %f %f %f", &subject1, &subject2, &subject3, &subject4, &subject5);

    // Calculate total and percentage
    total = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (total / 500.0) * 100;

    // Determine division
    if (percentage >= 60) {
        strcpy(division, "First Division");
    } else if (percentage >= 50) {
        strcpy(division, "Second Division");
    } else if (percentage >= 40) {
        strcpy(division, "Third Division");
    } else {
        strcpy(division, "Fail");
    }

    // Print results
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Division: %s\n", division);

    return 0;
}
