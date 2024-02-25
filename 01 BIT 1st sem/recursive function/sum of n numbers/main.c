#include <stdio.h>
//sum of n numbers using recursion
int sum(int);

int main()
{
    int n;
    printf("Enter the number ::");
    scanf("%d", &n);
    printf("The sum up to %d from 1 is :: %d", n, sum(n));
    return 0;
}

int sum(int n)
{
    if(n != 0)
        return n + sum(n - 1);
    else
        return n;
}
