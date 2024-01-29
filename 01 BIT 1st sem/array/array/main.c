#include <stdio.h>
//testing array
int main()
{
    //int array[] = {};//it this allowed? but,bringing errors,
    printf("Enter the size of array :: ");
    int size;
    scanf("%d", &size);
    int array[size];//dynamic allocation is possible? maybe this causes problems
    printf("Enter the elements of array :: \n");
    int i;
    for(i = 0; i < size; i++)
    {
        printf("Element %d :: ", i + 1);
        scanf("%d\n", &array[i]);//its taking 2 inputs in the beginning
    }
    printf("The elements of array are :: \n");
    for(i = 0; i < size; i++)
    {
        printf("Element %d :: %d\n", i + 1, array[i]);
    }
    return 0;
}
