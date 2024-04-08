#include <stdio.h>
#include <stdlib.h>
//pascals triangle
int main()
{
    int i, j, c, space, n;
    printf("Enter the number of rows :: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(space = 1; space <= n - i; space++)
            {printf("  ");}

        c = 1;
        for(j = 1; j <= i; j++)
        {
            printf("%4d", c);
            c = c * (i - j) / j;
        }
        printf("\n");
    }
    return 0;
}
