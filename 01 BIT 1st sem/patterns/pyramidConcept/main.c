#include <stdio.h>
//pyramid
int main()
{
    int i, j, k, rows;
    printf("Enter the number of rows :: ");
    scanf("%d", &rows);
    for(i = 1; i <= rows; i++)
    {
        for(j = i; j < rows; j++)
        {
            printf("  ");
        }
        for(k = 1; k <= 2 * i - 1; k++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
