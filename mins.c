#include<stdio.h>
struct TIME
{
  int sec;
  int mins;
  int hrs;
};
void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);

int main()
{
    struct TIME startTime, stopTime, diff;

    printf("Enter start time: \n");
    printf("Enter hours, minutes and seconds respectively: ");
    scanf("%d %d %d", &startTime.hrs, &startTime.mins, &startTime.sec);

    printf("Enter stop time: \n");
    printf("Enter hours, minutes and seconds respectively: ");
    scanf("%d %d %d", &stopTime.hrs, &stopTime.mins, &stopTime.sec);

    // Calculate the difference between the start and stop time period.
    differenceBetweenTimePeriod(startTime, stopTime, &diff);

    printf("\nTIME DIFFERENCE: %d:%d:%d - ", startTime.hours, startTime.minutes, startTime.seconds);
    printf("%d:%d:%d ", stopTime.hrs, stopTime.mins, stopTime.sec);
    printf("= %d:%d:%d\n", diff.hrs, diff.mins, diff.sec);

    return 0;
}

void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff)
{
    if(stop.sec > start.sec){
        --start.mins;
        start.sec += 60;
    }

    diff->sec = start.sec - stop.sec;
    if(stop.mins > start.mins){
        --start.hrs;
        start.mins += 60;
    }

    diff->mins = start.mins - stop.mins;
    diff->hrs = start.hrs - stop.hrs;
}
