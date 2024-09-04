#include <stdio.h>

int main() {
    int hours, minutes, seconds;
    int total_seconds;

    // Read hours, minutes, and seconds from the user
    printf("Enter hours: ");
    scanf("%d", &hours);
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    printf("Enter seconds: ");
    scanf("%d", &seconds);

    // Convert the time to total seconds
    total_seconds = (hours * 3600) + (minutes * 60) + seconds;

    // Print the total seconds
    printf("Total time in seconds: %d\n", total_seconds);

    return 0;
}
