#include <stdio.h>
// factorial
/* 18.	Write algorithm and program to compute the followings using for, do while and while loop separately.
a.	factorial of an integer N
b.	computation of  ab( a raised to power b)
*/
//using for loop
int main()
{
    int N;
    int i;
    int fact;
    fact = 1;
    printf("Enter an integer :: ");
    scanf("%d", &N);
    for(i = 1; i <= N; i++)
    {
        fact *= i;
    }
    printf("The factorial of %d is :: %d", N, fact);
    return 0;
}
