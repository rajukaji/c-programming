#include <stdio.h>
#include <stdlib.h>
//2D array and nested loops
int main()
{
    int numPairs[8][2] = {
//here we need to specify the number of elements of array as well as the elements of the baby array's
        {1,2},
        {2,1},
        {3,4},
        {4,3},
        {5,6},
        {6,5},
        {7,8},
        {8,7}
    };
    int i, j;
    for(i=0; i<8; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d, ", numPairs[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
