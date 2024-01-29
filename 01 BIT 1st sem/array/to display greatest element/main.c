#include <stdio.h>
//write a program to display greatest elements of an array

int main()
{
    int array[] = {10330, 5033333, 800, 120, 3090};
    int i, j;
    int greatest;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(array[j] > array[i])
                greatest = array[j];
        }
    }
    printf("%d is the greatest.", greatest);
    return 0;
}
