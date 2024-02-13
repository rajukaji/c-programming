#include <stdio.h>

int main()
{
    int i, j;
    char arr[] = {'P', 'A', 'T', 'A', 'N'};
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("  %c", arr[j]);
        }
        printf("\n\n");
    }
    return 0;
}
