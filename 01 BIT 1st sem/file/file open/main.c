#include <stdio.h>
#include <stdlib.h>
//fopen
//fprintf
int main()
{
    FILE *fptr;
    fptr = fopen("file.txt", "w+");
    if(fptr == NULL)
    {
        printf("Error!\n");
        exit(1);
    }
   // printf("Enter a number :: ");
   // int n;
    //scanf("%d", &n);

    fprintf(fptr, "%[^\n]", "Enter a number ::\n");

    char str[50];
    fscanf(fptr, "%[^\n]", str);//this is used to read from the file
    printf("%s\n", str);
    fclose(fptr);
    return 0;
}
