#include <stdio.h>
// 0, 1, 1, 2, 3, 5, 8, 13, 21...
//fibonacci unsing recursion
int fibo(int);

int main()
{
    int n;
    int i, a;
    a = 0;
    printf("Enter the numbers of fibonacci to print :: ");
    scanf("%d", &n);
    printf("The fibonacci series is :: \n");
    for(i = 1; i <= n; i++)
    {
        printf("%d\n", fibo(a));
        a++;
    }
    return 0;
}

int fibo(int n)
{
    if ( n == 0 )
      return 0;
    else if ( n == 1 )
      return 1;
    else
      return ( fibo(n-1) + fibo(n-2) );
}
