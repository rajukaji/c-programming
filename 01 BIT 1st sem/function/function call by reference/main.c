#include <stdio.h>
//function call by reference
int swap(int, int);
int input();
int main()
{
    int a = input();
    int b = input();
    printf("The numbers before swap are :: \n  a :: %d b :: %d\n", a, b);
    swap(&a, &b);//passing address in actual parameters/arguements
    printf("The numbers after swap are :: \n  a :: %d b :: %d \n", a, b);
    return 0;
}
