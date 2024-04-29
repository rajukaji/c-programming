#include <stdio.h>
//array diagonal sum
//main diagonal and off diagonal
int main()
{
    int matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int m, n;
    m = 3;
    n = 3;
    int i, j, main_sum, off_sum;
    main_sum = 0;
    off_sum = 0;
    if (m == n)
    {
        printf("The matrix is :: \n");
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                printf("%d  ", matrix[i][j]);
            }
            printf("\n\n");
        }

        for(i = 0; i < m; i++)
        {
            main_sum += matrix[i][i];
            off_sum += matrix[i][m - i - 1];
        }
        printf("The sum of main diagonal is :: %d\n", main_sum);
        printf("The sum of off diagonal is :: %d\n", off_sum);
    }

    return 0;
}
