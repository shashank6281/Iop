#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Reading three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Finding the maximum number
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is %d\n", num2);
    } else {
        printf("The largest number is %d\n", num3);
    }

    return 0;
}
