#include <stdio.h>
/*
2.	Write a C program to read the score of student and print the
 grade according to score as:
Score>=80, “Distinction”
Score from 70 to less than 80 = “ First Division”
Score from 55 to less than 70 “ Second Division”
Sore from 40 to less than 55 “Third Division”
Score less than 40,  “ Fail”
*/

//switch cannot accept multiple values, use if else ladder
int main()
{
    float percentage;
    printf("\nEnter your percentage :: ");
    scanf("%f", &percentage);
    if(percentage >= 80 && percentage <= 100)
        printf("Distinction!");
    else if (percentage > 70)
        printf("First Division!");
    else if (percentage > 55)
        printf("Second Division!");
    else if(percentage > 40)
        printf("Third Division!");
    else if(percentage < 40 && percentage >= 0)
        printf("Failed!");
    else
        printf("Please enter a valid number!");

    printf("\n       Press Enter to check again :: ");
    getchar();//getchar doesn't take any parameters, it needs to get assigned
    if(getchar() != '\0');
        main();
    return 0;
}
