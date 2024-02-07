#include <stdio.h>
int newFunction(int, int); //this is a function prototype// or forward declaration
int input();//we can either put a variable or omit them.
int main()
{
    int a = input();
    int b = input();
    printf("The sum of %d and %d is :: %d", a, b, newFunction(a, b));
    return 0;
}
