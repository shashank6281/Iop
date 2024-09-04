#include <stdio.h>

int main() {
    float base, height, area;

    // Input base and height of the triangle
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    // Calculate the area of the triangle
    area = (base * height) / 2;

    // Print the result
    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}
