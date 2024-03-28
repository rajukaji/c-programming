#include <stdio.h>
#include <stdlib.h>
//24.	Write a program to read from a text file and count the number of lines and characters in that file.
void read();
int main()
{
    FILE * file = NULL;//best practice
    file = fopen("file.txt", "w");
    if(file == NULL)
    {
        printf("Error opening the file!");
        exit(1);
    }

    fprintf(file, "John Cena\n Under taker \n CM PUNK\n");
    fclose(file);

    read();
    return 0;
}
void read()
{
    FILE * file = NULL;
    file = fopen("file.txt", "r");
    char ch;
    int count, line;
    count = 0;
    line = 0;
    while( (ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
        if(ch != ' ' || ch != '\n')
            count++;
        if(ch == '\n')
            line++;
    }
    printf("The number of lines :: %d Characters :: %d\n", line, count);

    fclose(file);
}
