#include <stdio.h>

int main()
{
    int i, j;
    char nepal[] = "NEPAL";
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf(" %c  ", nepal[j]);
        }
        printf(" \n\n");
    }

    printf("\n\n");

    for(i = 0; i < 5; i++)
    {
        int a;
        a = 0;
        for(j = i; j < 5; j++)
        {
            printf(" %c  ", nepal[a]);
            a++;
        }
        printf(" \n\n");
    }
    return 0;
}
