#include <stdio.h>
//3.	Write a C program to find the sum of first 100 natural numbers using loop.

int main()
{
    int i, sum;
    sum = 0;
    for(i = 1; i <= 100; i++)
    {
        sum += i;
    }
    printf("The sum of first 100 natural numbers is :: %d\n", sum);
    return 0;
}
