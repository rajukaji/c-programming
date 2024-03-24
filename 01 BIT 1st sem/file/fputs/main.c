#include <stdio.h>
//fputs

int main()
{
    FILE *file;
    file = fopen("fputs.txt", "w+");
    fputs("Hello world!\n", file);
    fputs("Sincere world!\n", file);

    char sentence[1000];
    printf("Enter a sentence :: \n");
    scanf(" %[^\n]\n", sentence);
    fputs(sentence, file);


    fclose(file);
    return 0;
}
