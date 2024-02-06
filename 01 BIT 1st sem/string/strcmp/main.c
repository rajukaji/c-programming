#include <stdio.h>
#include <string.h>
//strcmp to compare 2 string, returns integer value
//if strings are same, returns 0
//if different returns the difference of ascii value either positive or negative
int main()
{
    char str1[10] = "abc";
    char str2[10] = "abc";
    char str3[10] = "aBc";
    char str4[10] = "ABCD";
    printf("%s = %s ? :: %d\n", str1, str2, strcmp(str1, str2));
    printf("%s = %s ? :: %d\n", str1, str3, strcmp(str1, str3));
    printf("%s = %s ? :: %d\n", str1, str4, strcmp(str1, str4));
    return 0;
}
