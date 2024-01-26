#include <stdio.h>
//using continue
int main()
{
    int i, sum;
    sum = 0;
    for(i = 0; i <= 10; i++)
    {
        if(i == 5)
            continue;//when it is 5, 5 is not summed but, it is skipped;
        sum += i;
    }
    printf("%d", sum);
    return 0;
}
