#include <stdio.h>
//pointer is a variable that carries address of another variable
int main()
{
    int* x;//it points to integer type
    char* ch;//it points to character type
    printf("Enter an integer :: ");
    scanf("%d", &x);
    printf(" address :: %d \n integer :: %d\n", &x, x);
    return 0;
}
