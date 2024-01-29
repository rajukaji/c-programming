#include <stdio.h>
//write a program to display smallest elements of an array

int main()
{
    int array[] = {2, 5, 8, 10, 3};
    int i, j;
    int smallest;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(array[j] > array[i])
                smallest = array[j];
        }
    }
    printf("%d is the smallest.", array[i]);
    return 0;
}
