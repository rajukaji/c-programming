#include <stdio.h>
//to convert into an upper case for the string.

char passArrayElement(char);

int main()
{
    char arr[] = "nepal";
    char ch;
    int i;
    i = 0;
    while(arr[i] != '\0')
    {
        ch = passArrayElement(arr[i]);
        printf("%c", ch);
        i++;
    }
    return 0;
}

char passArrayElement(char c)
{
    return (c - 32);
}
