#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int num;
    printf("Hello world!\n");
    printf("please enter a number:\n");
    scanf("%d",&num);
    printf("The number you entered is %d.",num);
    printf("please enter a number:\n");
    gets(num);

    return 0;
}
