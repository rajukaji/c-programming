#include <stdio.h>
//malloc, memory allocation
//creates a block of memory
int main()
{
    int* ptr;
    int n;
    printf("Enter the number of elements ::");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Enter %d element :: ", i);
        scanf("%d", (ptr + i));
    }
    for(i = 0; i < n; i++)
    {
        printf("The %p element :: %d\n", (ptr + i), *(ptr + i));
    }
    return 0;
}
