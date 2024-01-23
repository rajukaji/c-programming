#include <stdio.h>
//to print 1 to 10 using different approach of the for loop
int main()
{
    int i;
    for(i = 1 /*initialization*/; i <= 10 /*condition*/; i++/*updating*/)
    {
        printf("%d\n", i);
    }
    //we can also write
    i = 1;//initialization
    for(; i <= 10 ;)//the semicolons are for the missing expressions
    {
        printf("%d\n", i);
        i++;//updating loop;
    }
    //also
    i = 1;//initialization
    for(i; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    //or
    i = 1;//initialization
    for(; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
