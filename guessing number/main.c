#include <stdio.h>
#include <stdlib.h>

//guessing number with while loop
int main()
{
    int secretNumber = 3, guessTheNumber;
   // printf("Guess the lucky number: ");
    //scanf("%d", &guessTheNumber);
    printf("Guess the lucky number: ");
    while(guessTheNumber != secretNumber)
    {
        scanf("%d", &guessTheNumber);
        if(guessTheNumber != secretNumber)
        {
            printf("Please guess again:");
        }
    }
    printf("You win the guessing game.");
    return 0;
}
