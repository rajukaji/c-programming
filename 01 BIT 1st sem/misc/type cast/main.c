#include <stdio.h>
//typecast
int main()
{
    int a;
    a = 5;
    int b;
    b = 2;
    float div;
    div = (float)a/b;//(float) explicit type conversion
    printf("%d / %d :: %f ", a, b, div);
    return 0;
}
