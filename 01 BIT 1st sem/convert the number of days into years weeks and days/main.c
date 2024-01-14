#include <stdio.h>
//4.Write a C program to convert specified no of days into years, weeks and days.  (Note: Ignore leap year.)
int main()
{
    int day, week, year, remainingDays, lastDays;
    printf("Enter the number of days :: ");
    scanf("%d", &day);
    year = day / 365;
    remainingDays = day % 365;
    if(remainingDays<7)
        lastDays = remainingDays;
    week = remainingDays / 7;
    lastDays = remainingDays % 7;
    printf("Years :: %d weeks :: %d Remaining days :: %d\n", year, week, lastDays);
    return 0;
}
