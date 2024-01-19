#include <stdio.h>
//17.	Write an algorithm/ program to print the prime numbers up to 100.
//prime number has 2 factors, 1 and itself.
int main()
{
    int i, j;
    int count;
    count = 0;
    printf("Prime numbers less than 100 :: \n");
    for(i = 1; i <= 100; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }
        if(count == 2)//if there are 2 factors
            printf("%d \n", i);
        count = 0;//count needs to be 0 once again as to reset its value;
    }
    return 0;
}
