#include <stdio.h>
int main()
{
    int sec, hours, minutes, seconds; // Declare variables for seconds, hours, minutes, and seconds

    printf("Enter time in seconds: ");
    scanf("%d", &sec);

    // Calculate hours, minutes, and remaining seconds
    hours = (sec / 3600);
    minutes = (sec - (3600 * hours)) / 60;
    seconds = (sec - (3600 * hours) - (minutes * 60));
    printf("H:M:S \t %d:%d:%d\n", hours , minutes , seconds);

    return 0;
}