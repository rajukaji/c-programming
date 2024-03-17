#include <stdio.h>
#include <stdlib.h>
/*

18.	Write a program defining a structure to store the data for a student with
fields( rollno, f_name, l_name, address, mobile no) , input the data for a student and
display the record in appropriate format.
*/
struct student{
    int rollno;
    char f_name[15];
    char l_name[15];
    char address[20];
    unsigned long long int mobile;//to display greater data
};
int main()
{
    struct student student1;
    printf("Enter your first name :: ");
    scanf("%s", &student1.f_name);
    printf("Enter your last name :: ");
    scanf("%s", &student1.l_name);
    printf("Enter your roll no. :: ");
    scanf("%d", &student1.rollno);
    printf("Enter your address :: ");
    scanf(" %[^\n]", &student1.address);
    printf("Enter your mobile number :: ");
    scanf("%llu", &student1.mobile);
    printf("Your details :: \n");
    printf(" Name :: %s %s \n Roll no. :: %d \n Address :: %s \n Mobile Number :: %llu \n "
           , student1.f_name, student1.l_name, student1.rollno, student1.address, student1.mobile);
    return 0;
}
