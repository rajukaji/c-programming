#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Grade;
    int i;
    printf("Enter your Grade: ");
    scanf("%c", &Grade);/*use of ampersand for character, but not in string*/
    if(Grade == 'a')
    {
        Grade = 'A';
    }
    else if(Grade == 'b')
    {
        Grade = 'B';
    }
    else if(Grade == 'c')
    {
        Grade = 'C';
    }
     else if(Grade == 'd')
    {
        Grade = 'D';
    }
     else if(Grade == 'e')
    {
        Grade = 'E';
    }
     else if(Grade == 'f')
    {
        Grade = 'F';
    }
    else
    {
        printf("Your grade is invalid.");
    }


    printf("\nYour grade is: %c\n\n", Grade);


    switch(Grade)
    {
    case 'A':
        printf("Your grade is Outstanding.\n");
        break;
    case 'B':
        printf("Your grade is Good.\n");
        break;
    case 'C':
        printf("Your grade is Satisfactory.\n");
        break;
    case 'D':
        printf("Your grade is Poor.\n");
        break;
    case 'E':
        printf("Your grade is Worst.\n");
        break;
    case 'F':
        printf("You are Failed.\n");
        break;
    default:
        printf("Invalid Grade.\n");
        break;
    }


    return 0;
}
