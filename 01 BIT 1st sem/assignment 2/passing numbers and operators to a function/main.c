#include <stdio.h>
/*
12.	 Write a program that takes input of two numbers and any one operator in(+,-,*,/ ,%)
 as input and pass those numbers and an operator to the function.
 The function should calculate the result of two numbers as indicated by operator
 and return the result . Display the result of computation in your program.
*/
int compute(int, int, char);

int main()
{
    int a, b;
    char sign;
    printf("Enter the first number :: ");
    scanf("%d", &a);
    printf("Enter an operator :: ");
    scanf("\n%c", &sign);
    printf("Enter the second number :: ");
    scanf("%d", &b);
    printf("%d %c %d :: %d\n", a, sign, b, compute(a, b, sign));

    return 0;
}

int compute(int x, int y, char ch)
{
    switch(ch)
    {
    case '+':
        return x + y;
        break;
    case '-':
        return x - y;
        break;
    case '*':
        return x * y;
        break;
    case '/':
        return x / y;
        break;
    case '%':
        return x % y;
        break;
    default:
        printf("not a number");
    }
}
