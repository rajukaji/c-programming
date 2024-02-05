#include <stdio.h>
#include <string.h>
//palindrome and length of the string

int main()
{
    char string[25];//character type
    char rev[25];//character type
    int i;//for loop
    int length;//to count the length of the string
    length = 0;
    printf("Enter a string :: ");
    scanf("%s", string);//no ampersand
    for(i = 0; string[i] != '\0'; i++)//doesn't equal to null
    {
        length++;
    }
    printf("The length of the string %s is :: %d\n", string, length);
    //now for palindrome;
    for(i = length - 1; i >= 0; i--)//length is the last number, and the string index is n - 1
    {
        rev[length - i - 1] = string[i];
    }

    int flag;
    flag = 0;

    for(i = 0; i < length; i++)
    {
        if(rev[i] != string[i])
            flag = 1;
    }

    if (flag == 0)//not assignment, its equaling sign
        printf(" '%s' is a Palindrome.\n", string);
    else
        printf(" '%s' is not a Palindrome.\n", string);

    return 0;
}
