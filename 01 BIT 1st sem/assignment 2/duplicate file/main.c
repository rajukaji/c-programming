#include <stdio.h>
#include <stdlib.h>
//25.	Write a program to read a text file and copy all contents in the new file
//void duplicate();
void copy();
int main()
{
    FILE * file = NULL;
    file = fopen("original.txt", "w");
    if(file == NULL)
    {
        printf("Error opening file!");
        exit(1);
    }

    fprintf(file, "Hello world!\n John Cena");

    fclose(file);

    //void duplicate();
    void copy();

    return 0;
}
/*
void duplicate()
{
    FILE * file = NULL;
    file = fopen("duplicate.txt", "w");

    if(file == NULL)
    {
        printf("Error opening file!");
        exit(1);
    }

    fclose(file);
}*/
void copy()
{
    FILE * file1 = NULL;
    file1 = fopen("original.txt", "r");//to read the original file

    FILE * file2 = NULL;
    file2 = fopen("duplicate.txt", "w+");//to write and read from the duplicate file

    if ( (file1 == NULL) || (file2 == NULL) )
    {
        printf("Error opening file!");
        exit(1);
    }

    char ch;

    do//while( (ch = fgetc(file1)) != EOF )
    {
        ch = fgetc(file1);


        if(feof(file1))
            break;

        printf("%c", ch);

        fputc(ch, file2);


    }while(1);

    fclose(file1);
    fclose(file2);
}
