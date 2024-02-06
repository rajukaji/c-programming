#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter a string :: ");
    scanf("%s", str);
    printf("The length of the string is :: %d", strlen(str));
    return 0;
}
