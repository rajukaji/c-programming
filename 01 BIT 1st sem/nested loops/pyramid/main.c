#include <stdio.h>
//pyramid
int main()
{
    int i, j, k, l;
    for(i = 1; i <= 5; i++)
    {
        for(j = i; j <= 5; j++)
        {
            printf("  ");
        }
        for(k = 1; k <= i; k++)
        {
            printf("* ");
        }
        for(l = 1; l <= i-1; l++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
