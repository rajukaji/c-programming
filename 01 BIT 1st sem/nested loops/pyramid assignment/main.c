#include <stdio.h>
/*
22.	Write a program in C to make such a pattern like a pyramid with an asterisk.
   *
  * *
 * * *
* * * *

*/
int main()
{
    int i, j, k, l, b;
    for(i = 1; i < 5; i++)
    {
        for(j = i; j < 5; j++)
        {
            printf("  ");//2 spaces
        }
        for(k = 1; k <= i; k++)
        {
            printf("   *");//3 spaces
        }
        printf("\n");
    }
    return 0;
}
