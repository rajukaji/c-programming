#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
//predefined mactor __DATE__ and __TIME__//as string
int main()
{
    printf("%f\n", PI);
    printf("Date :: %s\n", __DATE__);
    printf("Time :: %s\n", __TIME__);
    return 0;
}
