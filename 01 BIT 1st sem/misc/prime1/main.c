#include <stdio.h>
//prime numbers
//greater than 1, the only 2 factors are 1 and itself
int main()
{
    int n, flag;
    flag = 1;//setting value true

    int i;//for for looping
    char ch;//for odd looping
    do{
        printf("\nEnter a positive integer number greater than 1 :: ");
        scanf("%d", &n);

        for(i = 2; i <= n/2; ++i)
        {
            if(n % i == 0)
            {
                printf("Not a prime numbers!\n");
                flag = 0;
                break;
            }
        }

        if(flag)//if true
        {
            printf("Prime number!\n");
        }
        printf("Do you want to continue [y/n] :: ");

        ch = getch();//doesn't print letter in the console, but, getche does

    }while(ch == 'Y' || ch == 'y');

    return 0;
}
