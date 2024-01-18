#include <stdio.h>
//nested for loop
/*
19.	Write a program in C to make such a pattern of astrisk(*) below using loop.
*
* *
* * *
* * * * 	up to n lines where n is an integers

*/
int main()
{
    int i, j;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
