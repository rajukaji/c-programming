#include <stdio.h>
//1. Write a C program to print your name, date of birth and mobile number using printf() and puts() functions.
int main()
{
    //puts("hello!");
    char fullName[20];
    int number;
    int dob;
    printf("Please enter your Full Name :: ");
    scanf("%[^\n]", fullName);//instead of %s, as it also prints the space inputs
    printf("Enter your date of birth in the format mm-dd--yyyy :: ");
    scanf("%d", &dob);
    printf("Enter your mobile number :: ");
    scanf("%d", &number);
    //printf("Your information is as follows :: \n Full Name :: %s \n Date of birth :: %d \n Contact :: %d \n", fullName, dob, number);
    //with puts() it can be shown as::
    printf("Your information is as follows :: \n");
    puts(fullName);//used to print strings only into a new line.
    printf("\n Date of birth :: %d \n Contact :: %d \n", dob, number);
    /*
     *   puts(dob);// cannot do
     *   puts(number);// cannot print even it compiles..
    */

    return 0;
}
