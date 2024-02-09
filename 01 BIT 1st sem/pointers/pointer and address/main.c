#include <stdio.h>

int main()
{
    int x;
    printf("Enter the value of x :: ");
    scanf("%d", &x);
    printf("The value of x is :: %d\n", x);

    int* point;//pointer to integer type
    point = &x;//holds the address of x
    //don't forget to put & here, other wise it will give warning
    printf("The value of x by dereferencing pointer is :: %d\n", *point);
    *point = 10;
    printf("The value of x after changing its value with dereferencing pointer is :: %d", x);

    return 0;
}
