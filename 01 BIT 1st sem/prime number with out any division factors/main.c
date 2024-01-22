#include <stdio.h>
//prime number
//prime number is only positive
int main()
{
    int num, count;
    count = 0;
    int i;
    i = 2;
    printf("Enter a number :: ");
    scanf("%d", &num);
    while(i < num && num > 1)
    {
        if(num % i == 0)
            count++;//if there are factors count will increase
        i++;//dont forget this
    }
    if(num == 1 || num < 1)//1 is not a prime number, a prime number cannot be negative
        count = 1;

    if(count == 0)//as there is no factors, it will be a prime number
        printf("Prime number!");
    else
        printf("Composite number!");
    return 0;
}
