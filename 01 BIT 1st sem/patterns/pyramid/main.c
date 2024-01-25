#include <stdio.h>
//pyramid upside down

int main()
{
    int i, j, k, rows;
    printf("Enter number of rows :: ");
    scanf("%d", &rows);
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j < i; j++)
        {
            printf("  ");
        }
        for(k = rows; k >= 2 * i - 1; k--)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
