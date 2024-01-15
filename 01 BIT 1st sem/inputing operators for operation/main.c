#include <stdio.h>
#include <math.h>
//11.	Write a program  that takes input of two numbers and an operator in(+,-,*,/ ) as input and pass those numbers and an operator to the function. The function should calculate the result of two numbers as indicated by operator and return the result. Display the result of computation in your program.
int main()
{
    char operate;
    int a, b;
    printf("Enter the first number :: ");
    scanf("%d", &a);
    printf("Enter the operator to perform a mathematical operation :: ");
    scanf(" %c", &operate);//put the space in the character input, otherwise it doesn't work//
    //or we can also write,
    //scanf("\n%c", &operate);
    /*
    Space before %c removes any white space (blanks, tabs, or newlines).
    It means %c without space will read white sapce like new line(\n), spaces(' ') or
     tabs(\t). By adding space before %c,
     we are skipping this and reading only the char given.
    */
    printf("Enter the second number :: ");
    scanf("%d", &b);
    if(operate == '+')
    {
        printf("The sum is :: %d", a + b );
    }
    else if(operate == '-')
    {
        printf("The difference is :: %d", a - b);
    }
    else if (operate == '*')
    {
        printf("The product is :: %d", a * b);
    }
    else if(operate == '/')
    {
        printf("The division quotient is :: %d", a / b);
    }
    else if(operate == '%')
    {
        printf("The remainder is :: %d", a % b);
    }
    else
    {
        printf("The operation cannot be performed.");
    }
    return 0;
}
