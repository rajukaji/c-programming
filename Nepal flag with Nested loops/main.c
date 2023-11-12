#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
   /* for(i=1; i<6; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
         printf("\n\n");
    }*/

    for(i=1; i<6; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*    ");
        }
         printf("\n\n\n");
    }
    for(i=1; i<7; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*    ");
        }
         printf("\n\n\n\n");
    }
    return 0;
}
