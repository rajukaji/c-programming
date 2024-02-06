#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter the string to change into upper case :: ");
    scanf("%s", str);
    printf("Upper case :: %s\n", strupr(str));

    printf("Enter in upper case :: ");
    scanf("%s", str);
    printf("The lower case is :: %s\n", strlwr(str));
    return 0;
}
