#include <stdio.h>
//nested array for matrix addition
int main()
{
    int A[2][2], B[2][2];//inputs
    //int C[2][2]; //for result of the addition of A + B
    printf("Enter the elements of matrix A for 2x2 :: \n");
    int i, j;//for loop
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of matrix B for 2x2 :: \n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    printf("The sum of Matrix A and Matrix B is 2x2 of C :: \n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("   %d", A[i][j] + B[i][j]);
        }
        printf("\n\n\n");
    }
    return 0;
}
