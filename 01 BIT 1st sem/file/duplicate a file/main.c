#include <stdio.h>
#include <stdlib.h>
//make a dublicate file
int main()
{
    FILE* fileOri = NULL;
    fileOri = fopen ("original.txt", "w");
    if(fileOri == NULL)
    {
        printf("Error occurred while creating the file!");
        exit(1);
    }
    fprintf(fileOri, "Some texts");
    fclose(fileOri);

    FILE* fileDup = NULL;
    fileDup = fopen("Duplicate.txt", "w");
    fileOri = fopen("original.txt", "r");

    char ch;
    ch = fgetc(fileOri);
    while(ch != EOF)
    {
        fputc(ch, fileDup);
        printf("%c", ch);
        ch = fgetc(fileOri);
    }
    fclose(fileOri);
    fclose(fileDup);

    return 0;
}
