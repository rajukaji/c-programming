#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//self referential structure
//concept of linked list in dsa
//single line and multiple lines, two types.
struct person{
    int id;
    char name[20];
    struct person* link;//self referencing
};
int main()
{
    struct person object1;
    object1.link = NULL;
    object1.id = 1;
    strcpy(object1.name, "John");
    struct person object2;
    object2.link = NULL;
    object2.id = 2;
    strcpy(object2.name, "Cena");

    object1.link = &object2;

    printf("id:: %d name :: %s\n", object1.link -> id, object1.link -> name);
    return 0;
}
