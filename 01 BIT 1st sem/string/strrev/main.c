#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter a String :: ");
    scanf("%s", str);
    printf("The reverse of the string is :: %s", strrev(str));
    //cannot assign string, ex, rev = strrev(str)
    return 0;
}
