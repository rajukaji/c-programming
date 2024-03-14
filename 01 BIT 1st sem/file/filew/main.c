#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE* fptr;
    fptr = fopen("writefile.txt", "w+");//to create and write//double quote is compulsory

    if(fptr == NULL)
        printf("The file is not created!\n");
    else
        printf("The file is created!\n");


    char str[20] = "Hello world";
    fprintf(fptr, "%s", str);
    fprintf(fptr, "\nJohn Cena!\n");

    fclose(fptr); //is necessary and compulsory

    FILE* readptr;
    readptr = fopen("writefile.txt", "r");

    char str1[100];
    fgets(str1, 100, readptr);
    printf("%s\n", str1);

    fclose(readptr);

    return 0;
}
