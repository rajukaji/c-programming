#include <stdio.h>
//like structure but, it can only give access to one element to be in used.

union person {
    int id;
    char name[30];//this is the size of union person, its actually 32 in the divisible of 4, the highest size is considered
    float salary;
};
//we can only initialize 1 value of person euither id, name, or salary, but, with structure, we can do it all..
int main()
{
    union person man1, man2;
    printf("Enter id of person 1 ::");
    scanf("%d", &man1.id);
    printf("The id of person 1 :: %d\n", man1.id);
    printf("Enter name of man2 :: ");
    scanf("%s", &man2.name);
    printf("Man 2 name :: %s\n", man2.name);
    return 0;
}
