#include <stdio.h>
//multidimensional array pointer
//array is a pointer itself

int main()
{
    int arr[2][3];
    int* ptr;
    ptr = arr;//keeps the address of arr[0][0]

    arr[1][2] = 5;
    printf("&arr[1][2] :: %p \n", &arr[1][2]);
    printf("arr[1][2] :: %d \n", arr[1][2]);

    printf("((arr + 1)+ 2) :: %p \n", ((arr + 1)+ 2));
    printf("*(*(arr + 1)+ 2) :: %d \n", *(*(arr + 1) + 2));//ptr doesn't work

    return 0;
}
