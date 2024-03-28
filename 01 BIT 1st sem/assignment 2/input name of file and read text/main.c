#include <stdio.h>
#include <stdlib.h>
//23.	Write a program to prompt user to input filename and read the content of file and display in screen.
void read(char []);
int main()
{
    char fName[20];
    printf("Enter name of your file :: ");
    scanf("%s", fName);
    FILE * file = fopen(fName, "w");
    if (file == NULL )
    {
        printf("Error opening file!");
        exit(1);
    }
    fprintf(file, "John Cena");
    fclose(file);

    read(fName);

    return 0;
}

void read(char ch[])
{
    FILE * file = fopen(ch, "r");
    if (file == NULL)
    {
        printf("Error opening file!");
        exit(1);
    }

    char c;
    while((c=fgetc(file)) != EOF)
    {
        printf("%c", c);
    }

    fclose(file);
}
