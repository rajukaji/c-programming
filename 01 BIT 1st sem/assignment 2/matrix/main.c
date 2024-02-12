#include <stdio.h>
/*
8.	Write a program to get input of two 3x3 matrices and
find out the sum and product of the matrices and
display the result of sum and product.
*/
int main()
{
    int A[3][3], B[3][3], product[3][3];
    int i, j;
    printf("Enter the elements of A :: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the elements of B :: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    printf("The sum of the matrices is :: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("  %d", A[i][j] + B[i][j]);
        }
        printf("\n\n\n");
    }
    printf("The Product of the matrices is :: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            product[i][j] = (A[i][0] * B[0][j]) + (A[i][1] * B[1][j]) + (A[i][2] * B[2][j]);
            printf("   %d", product[i][j]);
        }
        printf("\n\n\n");
    }
    return 0;
}
