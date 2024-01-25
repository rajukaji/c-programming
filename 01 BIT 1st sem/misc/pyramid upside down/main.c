#include <stdio.h>
//pyramid upside down

int main()
{
    int i, j, k;
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j < i; j++)
        {
            printf("   ");
        }

        for(k = 10; k >= 2 * i; k--)
        {
            printf("*  ");
        }
        printf("\n\n");
    }
    int row, space, col, n;
    printf("Enter the number of rows :: ");
    scanf("%d", &n);
    for(row = 0; row <= n; row++)
    {
        for(space = 0; space < row; space++)
        {
            printf("    ");
        }
        for(col = 2 * row - 1; col <= 2 * n - 1; k++)
        {
            printf("*  ");
        }
        printf("\n\n");

    }

    return 0;
}
