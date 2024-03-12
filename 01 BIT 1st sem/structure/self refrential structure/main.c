#include <stdio.h>
#include <stdlib.h>
//self referential structure
//concept of linked list in dsa
//single line and multiple lines, two types.
struct person{
    int id;
    char name[20];
    struct person* link;
};
int main()
{
    printf("Hello world!\n");
    return 0;
}
