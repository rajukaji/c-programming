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
    int mobile_no;
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
    scanf("%s", &student1.address);
    printf("Enter your mobile number :: ");
    scanf("%d", &student1.mobile_no);
    return 0;
}
