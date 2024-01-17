#include <stdio.h>
//armstrong number
//153 = 1 * 1 * 1 + 5 * 5 * 5 + 3 * 3 * 3
//the number is equal to the sum of its all digits which are raised to the power of the total number of digits.
int main()
{
    int num, arm, rem, real;
    arm = 0;
    printf("Enter a number :: ");
    scanf("%d", &num);
    real = num;
    while(num != 0)
    {
        rem = num % 10;
        arm += (rem * rem * rem);
        num /= 10;
    }
    if(real == arm)
        printf("%d is an Armstrong number!", real);
    else
        printf("%d is not an Armstrong number!", real);

    return 0;
}
