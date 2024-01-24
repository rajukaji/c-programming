#include <stdio.h>
//guess the number

int main()
{
    int num;
    int myFavoriteNumber;
    myFavoriteNumber = 7;
    /*printf("Enter a number :: ");
    scanf("%d", &num);*/
    printf("Guess my favorite number :: ");
    while(num != myFavoriteNumber)
    {

        scanf("%d", &num);
        if(num != myFavoriteNumber)
            printf("\n \n \n   Please guess again :: ");
        /*
        if(num == myFavoriteNumber)
        {
            printf("You guessed it right!");
            return;
        }
        */
    }
    printf("\n \n \n      You guessed it write!");
    return 0;
}
