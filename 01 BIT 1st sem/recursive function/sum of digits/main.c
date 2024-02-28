#include <stdio.h>
//sum of a digit using recusrsion function
int sum(int);

int main()
{
    int n;
    printf("Enter a number :: ");
    scanf("%d", &n);
    printf("The sum of the digits of the %d is :: %d", n, sum(n));
    return 0;
}

int sum(int n)
{
    if (n != 0)
    {
        return (n % 10) + sum(n / 10);
       // n = n / 10; cannot do this,, the n is never reached while recusive function calling it self each time,
    }
    else
        return 0;


}
