#include <stdio.h>
/*
to pring
P A T A N
P A T A
P A T
P A
P
*/

int main()
{
    int arr[] = {'P', 'A', 'T', 'A', 'N'};
    int i;
    int j;
    int count;
    count = 0;
    for(i = 0; arr[i] != '\0'; i++)
    {
        for(j = i; j < 5; j++)
        {
            printf("  %c", arr[count]);
            count++;
        }
        printf(" \n\n");
        count = 0;
    }
    return 0;
}
