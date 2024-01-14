#include <stdio.h>
//6.	Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
int main()
{
    int seconds, hour, minute, sec, rem;
    printf("Enter the seconds :: ");
    scanf("%d", &seconds);
    hour = seconds / 3600;//60min * 60sec in an hour
    rem = seconds % 3600;
    minute = rem / 60;
    rem = rem % 60;
    sec = rem;
    printf("hour :: %d minute :: %d seconds :: %d", hour, minute, sec);
    return 0;
}
