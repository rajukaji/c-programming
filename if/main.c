#include <stdio.h>
#include <stdlib.h>
/*to compare the greatest number between 2 numbers*/
int main()
{
    int num1, num2;
    printf("please enter the 1st number: \n");
    scanf("%d", &num1);
    printf("please enter the 2nd number: \n");
    scanf("%d", &num2);
    if(num1>num2)
    {
        printf("%d is the greatest.\n",num1);
    }
    else if(num2>num1)
    {
        printf("%d is the greatest.\n",num2);
    }
    else
    {
        printf("%d and %d are equal numbers.\n", num1, num2);
    }
    printf("\n");
    gpaConverter();
    return 0;
}
