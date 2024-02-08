
int swap(int *x, int *y)//pointing to the address of the parameter it carries
{
    int temp;
    temp = *x;//dereferencing and changing the value
    *x = *y ;
    *y = temp;
    return 0;
}
