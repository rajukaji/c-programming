#include <stdio.h>
//fgets(char* str, int n, FILE * stream);
void files();
int main()
{
    FILE* file;
    file = fopen("fgets.txt", "w+");
    if(file == NULL)
    {
        printf("Error opening file!");
        exit(1);
    }

    fprintf(file, "Hello world!\n");
    fclose(file);

    printf("Copying from the file!\n");
    files();

    return 0;
}
void files()
{
    FILE* fp;
    fp = fopen("fgets.txt", "r");
    char sentence[20];
    fgets(sentence, 20, fp);
    printf("From the file :: \n  %s", sentence);
}
