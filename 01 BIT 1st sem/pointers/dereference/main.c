#include <stdio.h>
//dereference is the method of accessing the data or value that the pointer points to
int main()
{
    int* x;//pointer to int
    printf("x before point to another address :: %d\n", x);
    int y;
    y = 5;
    x = &y;//points to the address of y;
    printf("Value of *x is :: %d, x = %d, y = %d\n", *x, x, y);
    //*x is used to dereference the pointer to get the value of y/

    int *z;
    printf("z = %d", z);
    return 0;
}
