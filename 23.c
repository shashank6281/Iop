#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1;

    // Reading base and exponent from the user
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Calculating power
    for(int i = 0; i < exponent; i++) {
        result *= base;
    }

    // Displaying the result
    printf("%d^%d = %lld\n", base, exponent, result);

    return 0;
}
