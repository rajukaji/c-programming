#include <stdio.h>
#include <string.h>
//string concatenation/ appending
int main()
{
    char str[20];
    printf("Enter a string :: ");
    scanf("%s", str);

    char str1[20];
    printf("Enter another string :: ");
    scanf("%s", str1);

    printf("To add both strings, we get :: %s", strcat(str, str1));
    return 0;
}
