#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Fahrenheit to Celsius conversion formula
    celsius = (fahrenheit - 32) * 5 / 9;

    // Print the value of Celsius
    printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}
