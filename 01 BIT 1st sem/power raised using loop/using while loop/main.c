#include <stdio.h>
/*
18.	Write algorithm and program to compute the followings using for, do while and while loop separately.
a.	factorial of an integer N
b.	computation of  ab( a raised to power b)
*/
//using while loop
int main()
{
    int a, b;
    int pow, i;
    printf("Enter a number :: ");
    scanf("%d", &a);
    printf("Enter the power to be raised :: ");
    scanf("%d", &b);
    pow = i = 1;
    while(i <= b)
    {
        pow *= a;
        i++;//don't ever forget this;
    }
    printf("The %d power to the %d is :: %d", b, a, pow);
    return 0;
}
