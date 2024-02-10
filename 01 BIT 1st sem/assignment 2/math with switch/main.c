#include <stdio.h>
#include <math.h>//to use fmod() function for floating modulus

/*1.	Write an algorithm and C program that accepts two integers from the user
as input and calculates the sum, diference, product, quotient and remainder
 applying different arithmetic operators between two integers using
 the concept of switch statement and odd loop.
*/

int main()
{
    char sign;
    float a, b;
    int loop;
    do{
        printf("Enter a number :: ");
        scanf("%f", &a);
        printf("Enter any operator, '+', '-', '*', '/', '%' :: ");
        scanf("\n%c", &sign);//space before %c or \n is must
        printf("Enter another number :: ");
        scanf("%f", &b);
        switch(sign)
        {
        case '+':
            printf("%f %c %f = %f\n", a, sign, b, a + b);//addition
            break;
        case '-':
            printf("%f %c %f = %f\n", a, sign, b, a - b);//subtraction
            break;
        case '*':
            printf("%f %c %f = %f\n", a, sign, b, a * b);//product
            break;
        case '/':
            printf("%f %c %f = %f\n", a, sign, b, a / b);//quotient
            break;
        case '%'://since it is a remainder, we cannot use float or double, but, integer
            /*
            int result;
            result = int(a) % int(b);
            not working
            */
            printf("%f %c %f = %f\n", a, sign, b, fmod(a, b));//remainder
            //fmod function with math.h for typecast, for finding modulus of floating type
            break;
        default:
            printf("Please enter valid number or operator!\n");
        }

        printf("If you want to perform next calculation enter 1 :: ");
        scanf("%d", &loop);
    }while(loop == 1);//semicolon is must,, also not assignment, but, equalling

    return 0;
}
