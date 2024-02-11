#include <stdio.h>
//4.Write a program in C to display the multiplication table of 1 to n where n is input number.
int main()
{
    int n, i, j;
    printf("Enter the number of multiplication table you need ::");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("The multiplication table of %d ::\n", i);
        for(j = 1; j <= 10; j++)
        {
            printf("   %d x %d = %d\n", i, j, i * j);
        }
        printf("\n");

    }
    return 0;
}
