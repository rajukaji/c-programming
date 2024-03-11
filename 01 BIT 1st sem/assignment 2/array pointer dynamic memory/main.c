#include <stdio.h>
#include <stdlib.h>

//16.	Write a program defining an array with dynamic memory allocation
//of integers and compute the sum of the array using function of your own.
int sum(int, int []);
int main()
{
    int* arr;
    int n;
    printf("Enter the numbers of elements :: ");
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    printf("Enter the elements of array :: ");
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", (arr + i) );
    }
    printf("The sum of the elements of the array is :: %d", sum(n, arr));
    free(arr);
    return 0;
}

int sum(int num, int n[])
{
    int total;
    total = 0;
    int i;
    for(i = 0; i < num; i++)
    {
        total += n[i];
    }
    return total;
}
