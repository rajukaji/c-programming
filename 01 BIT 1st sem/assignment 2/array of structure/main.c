#include <stdio.h>
#include <stdlib.h>
/*21.	Write a program using array of structure to store the data for 10 employees
 with fields( Essn, f_name, l_name, address, mobileno) , input the data for n employeess
 and display the record in appropriate format.
*/
struct details{
    int essn;
    char f_name[15];
    char l_name[15];
    char address[20];
    unsigned long long int mobileNo;
 };

int main()
{
    struct details employee[10];//array of structure
    int i;
    for(i = 0; i < 10; i++)
    {
        printf("For employee %d :: \n", i + 1);
        printf("Enter your first name ::  ");
        scanf("%s", &employee[i].f_name);
        printf("Enter your last name ::  ");
        scanf("%s", &employee[i].l_name);
        printf("Enter your ESSN ::  ");
        scanf("%d", &employee[i].essn);
        printf("Enter your address ::  ");
        scanf(" %[^\n]", &employee[i].address);//leave space infront
        printf("Enter your mobile number ::  ");
        scanf("%llu", &employee[i].mobileNo);
    }

    printf("The details you entered are :: \n\n");

    for(i = 0; i < 10; i++)
    {
        printf("For employee %d :: \n", i + 1);

        printf("  first name ::  %s\n", employee[i].f_name);

        printf("  last name ::  %s\n", employee[i].l_name);

        printf("  ESSN ID ::  %d\n", employee[i].essn);

        printf("  Address ::  %s\n", employee[i].address);

        printf("  Mobile number ::  %llu\n\n", employee[i].mobileNo);


    }

    return 0;
}
