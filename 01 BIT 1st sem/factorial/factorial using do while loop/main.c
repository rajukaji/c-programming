#include <stdio.h>
/*18.	Write algorithm and program to compute the followings using for, do while and while loop separately.
a.	factorial of an integer N
b.	computation of  ab( a raised to power b)
*/
// using do-while loop
int main()
{
    int N;
    int fact, i;
    fact = i = 1;
    printf("Enter an Integer number :: ");
    scanf("%d", &N);
    do {
        fact *= i;
        i++;
    }
    while(i <= N);
    printf("The factorial of %d is :: %d", N, fact);
    return 0;
}
