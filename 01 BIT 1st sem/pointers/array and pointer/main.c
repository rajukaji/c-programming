#include <stdio.h>
//array itself is a pointer
int main()
{
    int arr[4];
    int* ptr;//points to integer
    ptr = arr;//this is a pointer pointing to the first element of the array, but, not the array itself
    //no need to use ampersand as it is itself a pointer
    //the address arr holds is the address that is in the 1st index, ie, arr[0]

    //addresses
    printf("%p\n", ptr);
    printf("%p\n", arr);
    printf("%p\n", &arr[0]);
    printf("address of 3rd array :: %p\n", (ptr + 3));//using pointer
    printf("address of 3rd array :: %p\n", (arr + 3));//using array pointer
    printf("address of 3rd array :: %p\n", &arr[3]);


    arr[3] = 5;
    printf("arr3 :: %d\n", arr[3]);
    printf("*(arr + 3) :: %d\n", *(arr + 3));//can dereference the array as pointer
    printf("*(ptr + 3) :: %d\n", *(ptr + 3));//dereferencing the pointer

    return 0;
}
