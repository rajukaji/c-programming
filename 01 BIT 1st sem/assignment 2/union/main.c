#include <stdio.h>
#include <stdlib.h>
/*

1.	Write a program defining a union to store the data for a
student with fields( rollno, f_name, l_name, address, mobileno).
Illustrate the property of Union by accessing only one data member at a time.

*/
#include <string.h>

union un{
    int rollno;
    char f_name[15];
    char l_name[15];
    char address[20];
    char mobileno[15];
};
int main()
{
    union un student;//only one category can be initialized in the beginning
    student.rollno = 1;
    strcpy(student.f_name, "Ram");
    strcpy(student.l_name, "Bahadur");
    strcpy(student.address, "Lalitpur");
    strcpy(student.mobileno, "977 9812345678");
    printf("roll no :: %d\n", student.rollno);//cannot be accessed as we set mobileno at last and only this is valid now.
    printf("Mobile no. :: %s\n", student.mobileno);

    strcpy(student.f_name, "Ram");
    printf("First name :: %s\n", student.f_name);//now this can be accessed
    printf("last name :: %s\n", student.l_name);//still prints Ram, as it is copied to the next string

    printf("Address :: %s\n", student.address);//still prints Ram

    strcpy(student.address, "Lalitpur");
    printf("Address :: %s\n", student.address);//now prints Lalitpur
    printf("Mobile no. :: %s\n", student.mobileno);//prints Lalitpur

    printf("Roll no. :: %d\n", student.rollno);//prints random number

    student.rollno = 37;
    printf("Roll no. :: %d\n", student.rollno);//only now the roll no is accessed

    return 0;
}
