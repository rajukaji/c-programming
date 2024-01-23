#include <stdio.h>
/*
printing
1
22
333
4444
55555
*/
int main()
{
    int i, j;
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d  ", i);
        }
        printf("\n");//ending the inner loop, we go to the new line for the new outer loop;
    }
    return 0;
}
