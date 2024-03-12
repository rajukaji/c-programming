#include <stdio.h>

//19.	Write a program to pass array to a function using pointer and return array from a function using pointer.
int passArray(int* []);
int main()
{
    int arr[3];
    int* ptr;
    int i;
    printf("Enter the elements of array :: ");
    for(i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    printf("The elements of the array are ::\n");

    for(i = 0; i < 3; i++)
    {
        printf("%d\n", passArray(ptr + i));
    }

    for(i = 0; i < 3; i++)
    {
        printf("arr[%d] :: %d\n", i, arr[i]);
    }

    return 0;
}
int passArray(int* ar[])
{
    return *ar;
}
