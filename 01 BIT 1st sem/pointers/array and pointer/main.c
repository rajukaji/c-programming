#include <stdio.h>
//array itself is a pointer
int main()
{
    int arr[4];
    int* ptr;//points to integer
    ptr = arr;//no need to use ampersand as it is itself a pointer
    //the address arr holds is the address that is in the 1st index, ie, arr[0]
    printf("%p\n", ptr);
    printf("%p\n", arr);
    printf("%p\n", arr[0]);
    arr[3] = 5;
    printf("arr3 :: %d\n", arr[3]);
    printf("*(ptr + 2) :: %d\n", *(ptr + 2));
    return 0;
}
