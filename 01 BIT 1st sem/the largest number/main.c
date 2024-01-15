#include <stdio.h>
//10.	Draw a flow chart and write a C program that accepts three integers as input  and find the largest of three.

int main()
{
    int x, y, z;
    printf("Enter the 1st number :: ");
    scanf("%d", &x);
    printf("Enter the 2nd number :: ");
    scanf("%d", &y);
    printf("Enter the 3rd number :: ");
    scanf("%d", &z);
    if(x>y)
    {
        if(x>z)
        {
            printf("The %d is the largest number.", x);
        }
        else
        {
            printf("The %d is the largest number.", z);
        }
    }
    else
    {
        printf("The %d is the largest number.", y);
    }
    return 0;
}
