#include <stdio.h>
/*
20.	Write a program using loop to print the following floyd's triangle as given below when input is n.
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15  up to n rows

*/
int main()
{
    int i, j;
    int count;
    count = 1;
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", count);
            count++;
        }
          printf("\n");
    }
    return 0;
}
