#include <stdio.h>
#include <stdlib.h>
//print odd integer in one file
//print even integer in another file
//create 3 files
int main()
{
    FILE* file = NULL;
    file = fopen("numbers.txt", "w");
    if(file == NULL)
    {
        printf("Error while opening the file!");
        exit(1);
    }
    int n;
    printf("Enter the upper limit :: ");
    scanf("%d", &n);
    int i;
    for(i = 1; i <= n; ++i)
    {
        putw(i, file);
    }
    fclose(file);

    file = fopen ("numbers.txt", "r");

    FILE* fodd = NULL;
    fodd = fopen("odd.txt", "w");
    printf("Odd numbers :: \n");
    for(i = 1; i <= n; ++i)
    {
        if(i % 2 != 0)
        {
            putw(i, fodd);
            printf("%d\n", i);
        }
    }
    fclose(fodd);

    FILE* feven = NULL;
    feven = fopen("even.txt", "w");

    printf("Even numbers :: \n");
    for(i = 1; i <= n; ++i)
    {
        if(i % 2 == 0)
        {
            putw(i, feven);
            printf("%d\n", i);
        }
    }
    fclose(feven);
    fclose(file);

    return 0;
}
