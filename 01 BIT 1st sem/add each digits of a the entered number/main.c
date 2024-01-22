#include <stdio.h>
//add all the digits of the entered number
int main()
{
    int sum, num;
    sum = 0;
    int rem, real;
    printf("Enter a number :: ");
    scanf("%d", &num);
    real = num;
    while(num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num /= 10;
    }
    printf("The sum of each digits of %d is :: %d", real, sum);
    return 0;
}
