#include <stdio.h>
#include <stdlib.h>
/*arguements passing*/
void parameter(char name[])/*variable declaration*/
{
    printf("hello %s!\n", name);
}

void newfunct(char naame[])
{
    printf("hello %s!\n", naame);
}
main()
{
    char firstName[20];
    printf("Please enter your First name: \n");
    scanf("%s", firstName);
    newfunct(firstName);
    parameter("John");/*arguements/string passing in the function while calling*/
    return 0;
}
