#include <stdio.h>
//recursive function to find the factorial of a number
//recursive function calls itself for looping
int fact(int );
int main()
{
    int n;
    printf("Enter an integer number :: ");
    scanf("%d", &n);
    printf("The factorial of %d is :: %d\n", n, fact(n));
    return 0;
}

int fact(int n)
{
    if(n != 0)
        return n * fact(n - 1);
    else
        return 1;//or n
}
