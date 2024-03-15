#include <stdio.h>
#include <stdlib.h>
//20.	Write a program that illustrates the similarity between array and pointer.
int main()
{
    int arr[3];//array of 3 elements
    int* ptr;
    ptr = (int*) malloc(3 * sizeof(int));//array of 3 elements
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    ptr[0] = 1;//assigning values in a pointer as an array;
    ptr[1] = 2;
    ptr[2] = 3;
    int i;
    for(i = 0; i < 3; i++)
    {
        printf("Array element %d :: %d\n", i, arr[i]);
        printf("Pointer element %d :: %d\n", i, ptr[i]);//accessing values as array for a pointer
    }

    /*(arr + 0) = 0;//assigning as a pointer
    (arr + 1) = 1;
    (arr + 2) = 2;
    (ptr + 0) = 0;
    (ptr + 1) = 1;
    (ptr + 2) = 2;*/

    for(i = 0; i < 3; i++)
    {
        printf("Array element %d :: %d\n", i, *(arr + i));//accessing values as a pointer for array
        printf("Pointer element %d :: %d\n", i, *(ptr + i));
    }
    free(ptr);
    return 0;
}
