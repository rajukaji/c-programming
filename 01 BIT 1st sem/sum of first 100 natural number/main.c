#include<stdio.h>
//15.	Write a C program to find the sum of first 100 natural numbers using loop.
int main()
{
    int num, sum;
    num = 1;
    sum = 0;
    while(num <= 100)
    {
        sum = num + sum;
        ++num;//0+0, 1+0, 2+1,3+2,,,,
    }
    printf("The sum of the first 100 natural numbers :: %d", sum);
    return 0;
}
