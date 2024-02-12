#include <stdio.h>
//10.	Write a program to find smallest element in an array.
int main()
{
    int arr[] = {300, 0, 6, 70, 10};
    int i;
    int small;
    small = arr[0];
    for(i = 0; i < 5; i++)
    {
        if(small > arr[i])
            small = arr[i];

    }
    printf("The smallest number in the array is  :: %d \n", small);

    return 0;
}
