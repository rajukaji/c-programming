#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//difference between structure and union
struct st{
    int id;
    float num;
    char name[20];
};
union un{
    int id;
    float num;
    char name[20];
};
int main()
{
    struct st object1 = {1, 2.0, "John"};
    printf("structure object :: %d, %f, %s\n", object1.id, object1.num, object1.name);
    union un object2 = {0, 2.0, "Cena"};//cannot initialize all three
    //only 1 is initialized;
    printf("Union object :: %d, %f, %s\n", object2.id, object2.num, object2.name);
    //only prints 1, not 2nd and 3rd category, num, and name.
    object2.id = 2;
    object2.num = 3.0;
    strcpy(object2.name, "John");
    printf("Union object :: %d, %f, %s\n", object2.id, object2.num, object2.name);
    //only prints john but nothing else,, only one can be taken at a time.
    object1.id = 4;
    object1.num = 5.0;
    strcpy(object1.name, "UnderTaker");
    printf("structure object :: %d, %f, %s\n", object1.id, object1.num, object1.name);
    //prints all for structure
    printf("The size of structure :: %d\n", sizeof(object1));//28, total of all the child of structure
    printf("The size of union :: %d\n", sizeof(object2));//20, highest size of child of union

    //we can access the member of union one at a time, though
    object2.id = 10;
    printf("Union object :: %d\n", object2.id);
    object2.num = 32.0;
    printf("Union object :: %f\n", object2.num);
    strcpy(object2.name, "Goldberg");
    printf("Union object :: %s\n", object2.name);

    printf("Union object :: %d\n", object2.id);//doesn't show the data
    printf("Union object :: %f\n", object2.num);//it doesn't give the required value

    return 0;
}
