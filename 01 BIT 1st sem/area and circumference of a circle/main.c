#include <stdio.h>
#define PI 3.14159
//3. Write algorithm, flow-chart and program to compute the area and circumference of a circle with given radius r as input defining  π as constant (Note: Area=πr^2)
int main()
{
    float r, area, circumference;
    printf("Enter the radius :: ");
    scanf("%f", &r);
    area = PI * r * r;
    circumference = 2 * PI * r;
    printf("The area of the circle is :: %f", area);
    printf("The circumference of the circle is :: %f", circumference);
    return 0;
}
