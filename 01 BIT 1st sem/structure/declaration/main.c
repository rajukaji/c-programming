#include <stdio.h>
#include <string.h>
//structure are used to declare multiple data type under same variable name

struct profile{
    char name[20];
    int id;
    char address[20];

};//we can either declare structure variables here
int main()
{
    struct profile person1, person2, person3;//declaring structure variables.
    strcpy(person1.name, "Raju");
    strcpy(person1.address, "Lalitpur");
    printf("Person 1 name :: %s\n", person1.name);
    printf("Person 1 address :: %s\n", person1.address);
    return 0;
}
