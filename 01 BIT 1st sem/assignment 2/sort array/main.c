#include <stdio.h>
//9.	Write a program to sort an array in ascending order.

int main()
{
    int arr[] = {300, 50, 6, 70, 10};
    //int small;
    int swap;
    //small = arr[0];
    int i;
    /*
    for(i = 0; i < 5; i++)
    {
        if(small > arr[i])
            small = arr[i];
        printf("   \n%d ", arr[i]);
    }*/
    int j;
    for(i = 0; i < 5; i++)
    {
        for(j = 1; j < 5; j++)
        {
            if(arr[i] < arr[j])
            {
                swap = arr
            }
                arr[i] = arr[j];

        }
    }for(i = 0; i < 5; i++)
    {
        printf("   \n%d ", arr[i]);
    }

    return 0;
}
