#include <stdio.h>
//array

int main()
{
    int array[10], i;
    printf("Enter the elements of array :: ");
    for(i = 0; i < 10; i++)
    {
        scanf("%d\n", &array[i]);//& is must,, otherwise, it will give 2 errors
    }
    for(i = 0; i < 10; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}
