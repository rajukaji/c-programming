#include <stdio.h>
/*
    18.	Write algorithm and program to compute the followings using for, do while and while loop separately.
a.	factorial of an integer N
b.	computation of  ab( a raised to power b)

*/
//while loop
int main()
{
    int N;
    int factorial;
    factorial = 1;
    int i;
    i = 2;
    printf("Enter an integer number :: ");
    scanf("%d", &N);
    while(i <= N)
    {
        factorial = factorial * i;
        i++;//don't forget this.
    }
    printf("The factorial of %d is :: %d", N, factorial);
    return 0;
}
