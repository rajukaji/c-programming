#include <stdio.h>
/*18.	Write algorithm and program to compute the followings using for, do while and while loop separately.
a.	factorial of an integer N
b.	computation of  ab( a raised to power b)
*/
//using for loop raising a to the power of b;
int main()
{
    int a, b;
    int i;
    int power;
    power = 1;
    printf("Enter a number :: ");
    scanf("%d", &a);
    printf("Enter the power to be raised :: ");
    scanf("%d", &b);
    for(i = 1; i <= b; i++)
    {
        power *= a;
    }
    printf("The %d to the power of %d is :: %d", b, a, power);
    return 0;
}
