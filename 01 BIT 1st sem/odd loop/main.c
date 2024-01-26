#include <stdio.h>
//odd loop concept
int main()
{
    int repeat, a, b;
    repeat = 1;
    while(repeat == 1)
    {
        printf("Enter fist number :: ");
        scanf("%d", &a);
        printf("Enter second number :: ");
        scanf("%d", &b);
        printf("The sum of %d and %d is :: %d", a, b, a + b);
        printf("\n\n  If you want to continue please enter 1!");
        scanf("%d", &repeat);
    }
    return 0;
}
