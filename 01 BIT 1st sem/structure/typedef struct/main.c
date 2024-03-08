#include <stdio.h>
typedef struct list{
    int id;
    char name[20];
};
int main()
{
    struct list person[3];
    int i;
    printf("Enter names :: \n");
    for(i = 0; i < 3; i++)
    {
        printf("%d :: ", i + 1);
        scanf(" %[^\n]", &person[i].name);
    }
    printf("The details are :: \n");
    for(i = 0; i < 3; i ++)
    {
        printf("%d :: %s\n", i + 1, person[i].name);
    }
    return 0;
}
