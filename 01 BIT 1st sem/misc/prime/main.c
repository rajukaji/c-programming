#include <stdio.h>
//prime numbers has two factors either 1 or itself

int main()
{
    int n;
    int count;
    count = 0;
    int i;
    i = 1;
    printf("Enter a number :: ");
    scanf("%d", &n);
    if(n > 1)
    {
        while(i <= n)
        {
            if(n % i == 0)
                count++;
            i++;
        }
    }
    if(count == 2)
        printf("Prime number!");
    else
        printf("Not a Prime number!");
    return 0;
}
