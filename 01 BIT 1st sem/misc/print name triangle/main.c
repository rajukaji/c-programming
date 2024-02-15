#include <stdio.h>

int main()
{
    int arr[] = {'N', 'E', 'P', 'A', 'L' };
    int i;
    int j;
    for(i = 0; arr[i] != '\0'; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("  %c", arr[j]);
        }
        printf(" \n\n");
    }
    return 0;
}
