#include <stdio.h>
//5.Write an algorithm and C program that accepts two integers from the user as input and calculates the sum, difference, product, quotient and remainder applying different arithmetic operators between two integers.
int main()
{
    int x, y;
    int sum, difference, product, quotient, remainder;
    printf("Enter the value of x :: ");
    scanf("%d", &x);
    printf("Enter the value of y :: ");
    scanf("%d", &y);
    sum = x + y;
    difference = x - y;
    product = x * y;
    quotient = x / y;
    remainder = x % y;
    printf("The arithmetic operations are as follows :: \n");
    printf("sum :: %d \n difference :: %d \n product :: %d \n quotient :: %d \n remainder :: %d \n", sum, difference, product, quotient, remainder);
    return 0;
}
