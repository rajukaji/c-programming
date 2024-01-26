#include <stdio.h>
//use of break
int main()
{
    int i, sum;
    sum = 0;
    for(i = 0; i <= 10; i++)
    {
        if(i == 5)
            break;//when it comes to five, the loop ends;
        sum += i;
    }
    printf("%d", sum);
    return 0;
}
