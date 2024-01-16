#include <stdio.h>
/*14.Write a C program to find the eligibility of admission for a professional course based on the following criteria:
    Marks in Maths >=65
    Marks in Phy >=55
    Marks in Chem>=50
*/
int main()
{
    int math, phy, chem;
    printf("Enter the mark secured in math :: ");
    scanf("%d", &math);
    printf("Enter the mark secured in physics :: ");
    scanf("%d", &phy);
    printf("Enter the mark secured in chemistry :: ");
    scanf("%d", &chem);
    if(math >= 65 && phy >= 55 && chem >= 50)
        printf("You are eligible for the admission for the professional course!");
    else
        printf("You are not eligible for the admission for the professional course!");
    return 0;
}
