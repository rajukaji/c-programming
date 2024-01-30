#include <stdio.h>
//odd loop and calculator

int main()
{
    int repeat;
    repeat = 0;
    int a, b;
    char operate;
    while(repeat == 0)
    {
        printf("Enter the first number :: ");
        scanf("%d", &a);
        printf("Enter the operator :: ");
        scanf(" %c", &operate);//space before %c is must, or use \n before %c/
        printf("Enter the second number :: ");
        scanf("%d", &b);
        switch(operate)
        {
            case '+':
                printf("%d %c %d = %d", a, operate, b, a + b);
                break;
            case '=':
                printf("%d %c %d = %d", a, operate, b, a - b);
                break;
            case '/':
                printf("%d %c %d = %d", a, operate, b, a / b);
                break;
            case '*':
                printf("%d %c %d = %d", a, operate, b, a * b);
                break;
            case '%':
                printf("%d %c %d = %d", a, operate, b, a % b);
                break;
            default:
                printf("Use default operators :: +, -, /, *, %");
        }
        printf("\nIf you want to continue enter 0 :: ");
        scanf("%d", &repeat);
    }
    return 0;
}
