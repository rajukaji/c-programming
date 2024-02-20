#include <stdio.h>
//to print first 10 prime number
int main()
{
    int i, j;
    int sum, count;
    sum = 0;
    count = 0;
    for(i = 1; i < 50; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
                count++;
        }
        if (count == 2)
        {
             printf("prime number : %d\n", i);
             sum++;
        }
        count = 0;
        if(sum == 10)
            break;

    }
    return 0;
}
