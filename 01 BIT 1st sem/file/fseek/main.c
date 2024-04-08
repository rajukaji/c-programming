#include <stdio.h>
#include <stdlib.h>
//fseek(file*stream, offset, position or whence)// offset and position is like from this point to this point
int main()
{
    FILE* ptr = NULL;
    ptr = fopen("fseek.txt", "w");
    if(ptr == NULL )
    {
        printf("Error opening the file!");
        exit(1);
    }
    fprintf(ptr, "Hello John Cena!");

    fseek(ptr, 6, SEEK_SET);//we are writing from 6th position from Hello , now;

    fputs("Under Taker!", ptr);

    fclose(ptr);
/*
    ptr = fopen("fseek.txt", "w+");
    fseek(ptr, 6, SEEK_SET);
    fputs("Under taker!", ptr);
    fclose(ptr);
*/
    ptr = fopen("fseek.txt", "r");
    char ch;
    ch = fgetc(ptr);
    //fseek(ptr, 1, SEEK_SET);
    while(ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(ptr);
    }//prints Hello Under Taker!
    fclose(ptr);

    return 0;
}
