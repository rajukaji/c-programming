#include <stdio.h>
struct details{
    int id;
    char name[20];
};

int main()
{
    struct details *pt1, *pt2;
    pt1 = &details->id;
    pt2 = &details->name;
    printf("Name :: %s\n", details->*ptr1);
    printf("Id:: %d \n", details->*ptr2);
    return 0;
}
