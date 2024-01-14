#include <stdio.h>
//2.Write a C program to display size in bytes of different data types using sizeof() operator.
int main()
{
    /*
    int integer;
    integer = 1;
    char character;
    double ddouble;
    float decimal;
    long double longDecimal;
    const CONSTANT;
    */
    int integer;
    integer = 1111111;
    printf("The size of different data types are as follows :: \n");
    printf("int :: %d",sizeof(integer));
    printf("\nunsigned int :: %d",sizeof(unsigned int));
    printf("\nunsigned short int :: %d",sizeof(unsigned short int));
    printf("\nsigned int :: %d",sizeof(signed int));
    printf("\nsigned short int :: %d",sizeof(signed short int));
    printf("\nshort int :: %d",sizeof(short int));
    printf("\nlong int :: %d",sizeof(long int));
    printf("\nsigned long int :: %d",sizeof(signed long int));
    printf("\nunsigned long int :: %d",sizeof(unsigned long int));
    printf("\nint :: %d",sizeof(int));
    printf("\nchar :: %d",sizeof(char));
    printf("\nsigned char :: %d",sizeof(signed char));
    printf("\nunsigned char :: %d",sizeof(unsigned char));
    printf("\nfloat :: %d",sizeof(float));
    printf("\ndouble :: %d",sizeof(double));
    printf("\nlong double :: %d",sizeof(long double));
  //  printf("%d",sizeof(string));
    return 0;
}
