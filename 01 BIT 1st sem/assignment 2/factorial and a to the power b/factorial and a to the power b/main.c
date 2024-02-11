#include <stdio.h>
/*1.Write algorithm and program to compute the followings using for,
  do while and while loop separately.
a.	factorial of an integer N
b.  computation of ab( a raised to power b)
*/
//while loop
int main()
{
    int N, i, fact;
    printf("Enter an integer :: ");
    scanf("%d", &N);
    fact = 1;
    i = 1;
    while(i <= N)
    {
        fact *= i;
        i++;
    }
    printf("The factorial of %d is :: %d\n", N, fact);
    //now with do while
    fact = 1;
    i = 1;
    do{
        fact *= i;
        i++;
    }while(i <= N);
    printf("The factorial of %d is :: %d\n", N, fact);
    return 0;
}
