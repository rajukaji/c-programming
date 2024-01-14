#include <stdio.h>
//7.	Write a C program that accepts principle, rate of interest, time in years and computes the simple interest.
int main()
{
    int principle, time;
    float interest, simpleInterest;
    printf("Enter the principle :: ");
    scanf("%d", &principle);
    printf("Enter the rate of interest :: ");
    scanf("%f", &interest);
    printf("Enter the time in years :: ");
    scanf("%d", &time);
    simpleInterest = (principle * interest * time) / 100;
    printf("The simple interest of %d for %d years at %f percent rate of interest is :: %f\n", principle, time, interest, simpleInterest);
    return 0;
}
