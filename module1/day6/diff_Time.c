#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time calculateTimeDifference(struct Time start, struct Time end) {
    struct Time diff;
    int totalSecondsStart, totalSecondsEnd, totalSecondsDiff;

    totalSecondsStart = start.hours * 3600 + start.minutes * 60 + start.seconds;

    totalSecondsEnd = end.hours * 3600 + end.minutes * 60 + end.seconds;

    totalSecondsDiff = totalSecondsEnd - totalSecondsStart;

    diff.hours = totalSecondsDiff / 3600;
    diff.minutes = (totalSecondsDiff % 3600) / 60;
    diff.seconds = totalSecondsDiff % 60;

    return diff;
}

int main() {
    struct Time startTime, endTime, difference;

    printf("Enter the start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter the end time (hh:mm:ss): ");
    scanf("%d:%d:%d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    difference = calculateTimeDifference(startTime, endTime);

    printf("\nTime difference: %02d:%02d:%02d\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}

