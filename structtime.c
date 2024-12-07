#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    struct Time time1, time2, result;

    printf("Enter two times:\n");

    printf("Enter Time 1 (in hours, minutes, and seconds):\n");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);

    printf("Enter Time 2 (in hours, minutes, and seconds):\n");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);

    // Calculate the sum
    result.seconds = time1.seconds + time2.seconds;
    result.minutes = time1.minutes + time2.minutes + result.seconds / 60;
    result.hours = time1.hours + time2.hours + result.minutes / 60;

    // Normalize minutes and seconds
    result.seconds %= 60;
    result.minutes %= 60;

    // Display the result
    printf("\nResultant Time: %02d:%02d:%02d\n", result.hours, result.minutes, result.seconds);

    return 0;
}
