#include <stdio.h>
//demerit of function return by value
void swap(int, int);
int input();
int main()
{
    int a = input();
    int b = input();
    printf("The values before swapping \n   a :: %d  b :: %d\n", a, b);
    swap(a, b);// the value is changed in the swap function scope only
    printf("The values after swapping \n    a :: %d  b :: %d\n", a, b);
    //whereas, there is not change in main function for the value of a and b
    //hence, the function return by value type might have some drawbacks
    return 0;
}
