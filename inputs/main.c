#include <stdio.h>
#include <stdlib.h>

int main()
{
    char gender[20], firstName[20], lastName[20];
    int age;
    printf("Plesae enter your First Name and Last Name: \n");
    scanf("%s%s", firstName, lastName);
    printf("How old are you: \n");
    scanf("%d", &age);/*ampersand & is must while taking input)*/
    printf("Please enter your gender: \n");
    scanf("%s", gender);
    printf("Hello %s! According to your information, you are %d years old and your gender is %s", firstName, age, gender);
    /*we dont put ampersand in age*/
    return 0;
}
