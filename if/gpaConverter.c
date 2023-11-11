#include <stdio.h>
#include <stdlib.h>
/*to convert gpa into grade*/
void gpaConverter()
{
    double GPA;
    printf("Please enter your GPA: \n");
    scanf("%lf", &GPA);

    if(GPA==4)
    {
        printf("Your grade is A+ for the GPA %lf which is Outstanding.\n", GPA);
    }
    else if(GPA<4 && GPA>=3.6)
    {
          printf("Your grade is A which is Excellent.\n");
    }
    else if(GPA<3.6 && GPA>=3.2)
    {
         printf("Your grade is B+ which is Very Good.\n");
    }
    else if(GPA<3.2 && GPA>=2.8)
    {
         printf("Your grade is B which is Good.\n");
    }
    else if(GPA<2.8 && GPA>=2.4)
    {
         printf("Your grade is C+ which is Satisfactory.\n");
    }
    else if(GPA<2.4 && GPA>=2)
    {
         printf("Your grade is C which is Acceptable.\n");
    }
    else if(GPA<2 && GPA>=1.6)
    {
         printf("Your grade is D which is Basic.\n");
    }
    else if(GPA>4 || GPA<0)
    {
        printf("Your GPA is invalid.\n");
    }
    else
    {
         printf("You are Not Graded ie. NG.\n");
    }
}
