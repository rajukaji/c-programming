#include <stdio.h>
#include <math.h>
//8.	Write algorithm pseudo-code as well as draw flow chart to Compute the roots of the quadratic equation   ax2+bx+c =0  for given coefficient input  a, b and c. Write C program.
//this program works fine to find out the real roots of the quadratic equation
int main()
{
    int a, b, c;
    int root1, root2, discriminant, result;
    printf("Enter the value of a :: ");
    scanf("%d", &a);
    printf("Enter the value of b :: ");
    scanf("%d", &b);
    printf("Enter the value of c :: ");
    scanf("%d", &c);
    discriminant = (b * b) - (4 * a * c);
    result = - b + sqrt(discriminant);
    root1 = result / (2 * a);
    result = - b - sqrt(discriminant);
    root2 = result / (2 * a);
    printf("The roots for the quadratic equation ax^2 + bx + c are :: (%d, %d)", root1, root2);
    return 0;
}
