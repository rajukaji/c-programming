#include <stdio.h>
//self referential structure
struct node{
    int num;
    int id;
    struct node* link;
};
int main()
{
    struct node obj1;
    obj1.link = NULL;//it stores a garbage value at first,
    obj1.num = 10;
    obj1.id = 1;

    struct node obj2;
    obj2.link = NULL;//stores garbage value when not initialized
    obj2.num = 20;
    obj2.id = 2;

    obj1.link = &obj2;//linking to obj 2, to access obj2 from obj1;
    obj2.link = &obj1;//linking and accessing obj1 from obj2;

    printf("Value of object 2 using object 1 link, num :: %d, id :: %d\n", obj1.link -> num, obj1.link -> id);
    printf("obj2.num :: %d\n", obj2.link -> num);
    printf("obj2.id :: %d\n", obj2.link -> id);
    return 0;
}
