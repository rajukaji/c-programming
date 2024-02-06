#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "man";//but can do this while initializing
    //hence, it is important that string is either entered by user or defined and initialized at the same time,
    //cannot assign // eg// str = "man"
    char str1[20];
    strcpy(str1, str);//its like assigning as string cannot be assigned
    printf("The copied string is :: %s", str1);
    return 0;
}
