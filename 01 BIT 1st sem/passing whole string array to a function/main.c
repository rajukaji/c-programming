#include <stdio.h>
//passing whole array to a function

void passArray(char []);
int main()
{
    char ch;
    char arr[] = "NEPAL";
    passArray(arr);
    return 0;
}
void passArray(char a[])
{
    int i;
    i = 0;
    printf("Array :: %s\n", a);
    while(a[i] != '\0')
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + 32;//to convert into a lowercase array;
        }

        printf(" %c", a[i]);
        i++;
    }
}
