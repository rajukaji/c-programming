#include <stdio.h>
//array of structure
struct array{
    int num;
    char name[20];
    float salary;
};

int main()
{
    struct array employee[5];
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("Enter the name of %d person :: ", i + 1);
        scanf("%[^\n]", &employee[i].name);
    }
    for(i = 0; i < 5; i++)
    {
        printf("The name of %d person :: %s\n", i, employee[i].name);
    }
    return 0;
}
