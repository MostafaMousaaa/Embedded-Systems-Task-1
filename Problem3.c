// Write a program that asks the user to enter the total time elapsed, in seconds, since 
// an event and converts the time to hours, minutes and seconds. The time should be 
// displayed as hours:minutes:seconds. [Hint: Use the remainder operator] 
// The screen dialogue should appear as follows:
// Enter the total time elapsed in seconds: 12345
// The time is 3:25:45

#include <stdio.h>

int main() {
    int total_time, hours, minutes, seconds;
    printf("Enter the total time elapsed in seconds: ");
    scanf("%d", &total_time);
    hours = total_time / 3600; // all hours exist in total_time 
    minutes = (total_time % 3600) / 60; // all minutes reminder of total_time 
    seconds = (total_time % 3600) % 60; // all seconds reminder of reminder of total_time
    printf("The time is %d:%d:%d\n", hours, minutes, seconds);
    return 0;
}

