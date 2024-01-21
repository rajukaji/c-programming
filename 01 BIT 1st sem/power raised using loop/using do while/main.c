#include <stdio.h>
/*18.	Write algorithm and program to compute the followings using for, do while and while loop separately.
a.	factorial of an integer N
b.	computation of  ab( a raised to power b)
*/
//using do-while
int main()
{
    int a, b;
    int i, pow;
    i = pow = 1;
    printf("Enter a number :: ");
    scanf("%d", &a);
    printf("Enter the power to be raised :: ");
    scanf("%d", &b);
    do
    {
        pow *= a;
        i++;//don't forget this;;;
    }while(i <= b);//semicolon is must;
    printf("The %d to the power of %d is :: %d ", a, b, pow);
    return 0;
}
