#include <stdio.h>
/*1.Write algorithm and program to compute the followings using for,
  do while and while loop separately.
a.	factorial of an integer N
b.  computation of ab( a raised to power b)
*/

int main()
{
    int a, b, pow;
    printf("Enter an integer :: ");
    scanf("%d", &a);
    printf("Enter the power to be raised for %d ::", a);
    scanf("%d", &b);
    int i;
    i = 1;
    pow = 1;
    while(i <= b)
    {
        pow *= a;
        i++;
    }
    printf("The %d raised to %d is :: %d\n", a, b, pow);

    //with do while
    i = 1;
    pow = 1;
    do{
        pow *= a;
        i++;
    }while(i <= b);
    printf("The %d raised to %d is :: %d\n", a, b, pow);

    return 0;
}
