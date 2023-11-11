#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;/*declaring variable*/
    printf("Hello naughty world!\n");
    printf("Enter your age: \n");
    scanf("%d", &age);/*to store or to take input from user, also ampersand "&" is needed for number type*/
    printf("You are %d years old.\n", age);
    char name[20];
    printf("Enter your name: \n");
    scanf("%s", name);/*ampersand & is not needed for string or character type but, it stops taking inputs after space*/
    printf("Hello %s.\n", name);

    char fullName[20];
    printf("Please enter your full name: \n");
    fgets(fullName, 20, stdin);
    printf("Your full name is : %s", fullName);

    return 0;
}
