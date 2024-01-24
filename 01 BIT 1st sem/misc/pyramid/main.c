#include <stdio.h>
//pyramid

int main()
{
    int i, j, k, l;
    int count;
    count = 1;
    for(i = 1; i <= 5; i++)
    {
        for(j = i; j < 5; j++)
        {
            printf("   ");
        }

        for(k = 1; k <= i; k++)
        {
            printf("    %d", count);
            count++;
        }/*
        for(l = 1; l <= i - 1; l++)
        {
            printf("* ");
        }*/
        printf("\n");
    }
    return 0;
}
