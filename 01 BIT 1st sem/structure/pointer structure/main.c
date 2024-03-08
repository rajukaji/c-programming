#include <stdio.h>
#include <stdlib.h>
//dynamic memory allocation of structs
struct details{
    int id;
    char name[20];
};

int main()
{
    struct details *ptr;
    int i, n;
    printf("Enter number of persons :: ");
    scanf("%d", &n);
    ptr = (struct details*) malloc(n * sizeof(struct details));//allocating memory dynamically
    printf("Enter names of ::\n");
    for(i = 0; i < n; i++)
    {
        printf("%d :: ", i + 1);
        scanf(" %[^\n]", &(ptr + i)->name);//need & for the address of each element of pointer array
        //here space in the beginning of scanf is must
        printf("\n");
    }
    printf("The details are :: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d :: %s\n", i + 1, (ptr + i)->name);//no dereferencing needed
    }
    return 0;
}
