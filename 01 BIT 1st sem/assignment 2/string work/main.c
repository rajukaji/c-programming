#include <stdio.h>
#include <string.h>
/*
11.	Write a program to  get a string as input and print the length of string, reverse of the string.
a.	Using String Library Function
b.	b.  Using your own function

*/
void myFunction();
int main()
{
    char str[20];
    printf("Enter a word :: ");
    scanf("%s", str);//no ampersand needed for this
    printf("The length of the string is :: %d \n", strlen(str));
    printf("The reverse of the string is :: %s \n", strrev(str));

    //again for my own function;
    myFunction();
    return 0;
}

void myFunction()
{
    char str[20];
    printf("Enter the string :: ");
    scanf("%s", str);
    int length;
    length = 0;
    int i;
    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    printf("The length of %s is :: %d\n", str, length);

    // for reversing string

    char rev[20];
    int j;
    i = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        length -= 1;
        rev[i] = str[length];
    }
    printf("The reversed string is :: %s", rev);

}
