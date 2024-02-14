#include <stdio.h>
/*
17.	Write a program to swap two numbers defining a function swap(int, int ) using:
b) value pass by reference
*/
void swap(int*, int*);//pointing to the address of the arguement
int main()
{
    int a, b;
    printf("Enter value of a :: ");
    scanf("%d", &a);
    printf("Enter value of b :: ");
    scanf("%d", &b);
    printf("Value before swapping a :: %d b :: %d\n", a, b);
    swap(&a, &b);//only passing or copying value of a and b//formal parameters/arugements
    printf("Value after swapping a :: %d b :: %d\n", a, b);
    return 0;
}
void swap(int *x, int *y)//actual arguements
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("Swapping value in the function a :: %d b :: %d\n", *x, *y);
}
