#include <stdio.h>
//16.	 Write a program in C to display the multiplication table of a given integer.

int main()
{
    int num;
    printf("Enter a number for the multiplication table :: ");
    scanf("%d", &num);
    int i;
    for(i = 1; i <= 10; i++)
    {
        printf("%d * %d :: %d\n", num, i, num * i);

    }
    return 0;
}
