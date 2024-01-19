#include <stdio.h>
//prime number or not
//it has 2 factors 1 and it self. eg, 7/1 = 1 && 7/7 = 1;

int main()
{
    int num, i, count;
    count = 0;
    printf("Enter a number :: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)
            count++;
    }
    if(count == 2)
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.", num);
    return 0;
}
