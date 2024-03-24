#include <stdio.h>
#include <stdlib.h>
//fwrite(), takes four arguments.
struct student
{
    int roll;
    char name[20];
    char address[20];
};
int main()
{
    struct student std;
    FILE* file;
    file = fopen("std.dat", "w");

    if (file == NULL)
    {
        printf("File didn't open correctly!");
        exit(0);
    }

    char ch;
    do
    {
        printf("\n Name :: ");
        scanf(" %[^\n]", &std.name);
        printf(" Roll number ");
        scanf("%d", &std.roll);
        printf(" Address ::");
        scanf(" %[^\n]"), &std.address;
        fwrite(&std, sizeof(std), 1, file);
        printf("Do you want to continue [y/n] :: ");
        ch = getche();

    } while(ch == 'y' || ch == 'Y');

    printf("\nSuccessfully written data!");
    fclose(file);
    return 0;
}
