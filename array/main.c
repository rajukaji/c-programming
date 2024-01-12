#include <stdio.h>

int main()
{
    int num[6] = {};
    int i;
    int j;
    //num[] = {};
    printf("Please enter the value for array :: ");


    for(i=0; i<6; i++)
    {
        scanf("%d", &num[i]);
        for(j=1; j<i; j++)
        {
            if(num[i]>num[j])
            {

            }
        }
       // printf("%d\n", num[i]);
    }
    for(i=0; i<6; i++)
    {
        //scanf("%d", &num[i]);
        printf("%d\n", num[i]);
    }

    return 0;
}
