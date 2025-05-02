#include <stdio.h>

// Define the structure "Time"
struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    // Declare variables to store two times and the result
    struct Time time1, time2, result;

    // Input time1
    printf("Input the first time (hours minutes seconds): ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);

    // Input time2
    printf("Input the second time (hours minutes seconds): ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);

    // Add the two times
    result.seconds = time1.seconds + time2.seconds;
    result.minutes = time1.minutes + time2.minutes + result.seconds / 60;
    result.hours = time1.hours + time2.hours + result.minutes / 60;

    // Adjust minutes and seconds
    result.minutes %= 60;
    result.seconds %= 60;

    // Display the result
    printf("\nResultant Time: %02d:%02d:%02d\n", result.hours, result.minutes, result.seconds);

    return 0;
}
