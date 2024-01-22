#include <stdio.h>

int main()
{
    int count;
    count = 1;
    int odd;
    odd = 1;
    int num;
    printf("Enter the numbers of odd number you want :: ");
    scanf("%d", &num);
    while(count <= num)
    {
        printf("%d\n", odd);
        odd += 2;
        count++;
    }
    return 0;
}
