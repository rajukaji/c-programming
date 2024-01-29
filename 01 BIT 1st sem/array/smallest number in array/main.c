#include <stdio.h>
//smallest number in the array
int main()
{
    int array[] = {108, 29, 50, 18, 20};
    int i;
    i = 0;
    int smallest;
    smallest = array[i];
    for(i = 0; i < 5; i++)
    {
        if (smallest > array[i])
            smallest = array[i];
    }
    printf("The smallest element in the array is :: %d", smallest);
    return 0;
}
