#include <stdio.h>
#include <stdlib.h>
//realloc
int main()
{
    int* ptr;
    int n;
    printf("Enter the number of elements :: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Enter the %p element :: ", (ptr + i));
        scanf("%d", (ptr + i));
    }
    for(i = 0; i < n; i++)
    {
        printf("Address :: %p *(ptr + %d) :: %d\n", (ptr + i), i, *(ptr + i));
    }
    ptr = (int*) realloc(ptr, n + 2);
    printf("The new locations :: \n");
    for(i = 0; i < n + 2; i++)
    {
        printf("%p \n", (ptr + (n + i)));
    }
    free(ptr);
    return 0;
}
