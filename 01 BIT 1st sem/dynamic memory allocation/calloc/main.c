#include <stdio.h>
#include <stdlib.h>
//calloc
//dynamic memory allocation is used to alter the size of data structure like array during the run time
int main()
{
    int n, sum, i;
    int* ptr;
    printf("Enter the number of elements to allocate memory for :: ");
    scanf("%d", &n);
    ptr = (int*) calloc (n, sizeof(int));
    printf("Enter elements :: \n");
    if (ptr == NULL)
    {
        printf("Error!");
        exit(0);
    }
    for(i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
        sum += *(ptr + i);
    }
    printf("The sum of all the numbers is :: %d\n", sum);
    free(ptr);
    return 0;
}
