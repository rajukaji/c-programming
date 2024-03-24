#include <stdio.h>
//fputs

int main()
{
    FILE *file;
    file = fopen("fputs.txt", "w+");
    fputs("Hello world!\n", file);
    fputs("Sincere world!\n", file);
    fclose(file);
    return 0;
}
