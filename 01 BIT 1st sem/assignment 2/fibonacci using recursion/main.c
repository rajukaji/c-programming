#include <stdio.h>
//14.	Write a program to find first 10 numbers in Fibonacci series using recursion.
int fibo(int);
int main()
{
    int n;
    n = 10;
    printf("The 10 elements in the fibonacci series are :: \n");
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d\n", fibo(i));
    }
    return 0;
}
int fibo(int n)
{
    if (n == 1)
        return 1;
    else if (n == 0)
        return 0;
    else
        return fibo(n - 1) + fibo(n - 2);
}
