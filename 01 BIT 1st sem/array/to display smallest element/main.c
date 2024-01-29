#include <stdio.h>
//write a program to display smallest elements of an array

int main()
{
    int array[] = {100, 50, 800, 120, 300};
    int i, j;
    int smallest;
    /*for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(array[j] > array[i])
                greatest = array[j];

            if(array[j] < array[i])
            {
                smallest = array[j];
            }
        }
    }*/
    for(i = 0; i < 4; i++)
    {
            /*if(array[j] > array[i])
                greatest = array[j];*/

            if(array[i] < array[i + 1])
            {
                smallest = array[i];
            }
            else
            {
                smallest = array[i + 1];
            }

    }
    printf("%d is the smallest.\n", smallest);
    //printf("%d is the greatest.", greatest);
    return 0;
}
