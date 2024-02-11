#include <stdio.h>
/*
6.Write a program in C to make following pattersn of astrisk(*) below using loop.

*
* *
* * *
* * * *

   *
  * *
 * * *
* * * *

*/

int main()
{
    int i, j;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    int k;
    for(i = 0; i < 5; i++)
    {
        for(j = 5; j > i; j--)
        {
            printf(" ");
        }
        for(k = 0; k < i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
