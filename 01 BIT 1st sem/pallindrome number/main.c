#include <stdio.h>
//12.	Write a program to determine whether a given number is palindrome or not.
int main()
{
    int num, real, rem;
    int reverse;
    printf("Enter a number :: ");
    scanf("%d", &num);
    reverse = 0;
    real = num;
    while(num != 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }
    if(real == reverse)
    {
        printf("The %d is a palindrome!", real);
    }
    else
    {
        printf("The %d is not a palindrome!", real);
    }
    return 0;
}
