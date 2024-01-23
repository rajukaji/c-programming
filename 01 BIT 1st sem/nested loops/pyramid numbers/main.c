#include <stdio.h>
/*
21.	Write a program in C to make such a pattern like a pyramid with numbers increased by 1.
   1
  2 3
 4 5 6
7 8 9 10

*/
int main()
{
    int i, j, k;
    int count;
    count = 1;
    for(i = 1; i < 5; i++)
    {
        for(j = i; j <= 5; j++)
        {
            printf(" ");//one space
        }
        for(k = 1; k <= i; k++)
        {
            printf("  %d", count);//two spaces
            count++;
        }
        printf("\n");
    }
    return 0;
}
