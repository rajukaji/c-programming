#include <stdio.h>
//15.Write a program to find umber a times a vowel ‘e’ appears in a given string.

int main()
{
    char str[20];
    int count;
    count = 0;
    printf("Enter a string ::");
    scanf("%s", str);
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        if (str[i] == 'e')
            count++;

        i++;
    }
    printf("The number of 'e' in the string is :: %d", count);
    return 0;
}
