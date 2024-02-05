#include <stdio.h>
#include <string.h>
//uppercase to lower case
//ascii of 'A' :: 65
//ascii of 'a' :: 97
int main()
{
    /*char ascii = 'A';
    * printf("%d", ascii);
    */
    char string[25];
    printf("Enter a string in lower case :: ");
    gets(string);

    printf("The upper case is :: ");
    int i;
    for(i = 0; string[i] != '\0'; i++)//string character doesn't equal to null
    {
        printf("   %c", string[i] - 32);//to upper case
    }

    printf("\nNow,\n   Enter in Upper case :: ");
    gets(string);
    printf("The lower case is :: ");
    for(i = 0; i < string[i] != '\0'; i++)
    {
        printf("   %c", string[i] + 32);//to lowercase
    }
    return 0;
}
