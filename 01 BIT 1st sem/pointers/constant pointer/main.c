#include <stdio.h>
//constant and pointer

int main()
{
    const int * point;//only the int type is now constant that it points to, it is read only
    int x;
    x = 10;
    point = &x;//the value of x cannot be changed with the dereference unlike c++
    printf("%d\n", *point);
    //*point = 5;//value cannot be changed with dereferencing pointer
    //generates error, as it is only read-only location

    int y;
    y = 1;
    point = &y;//this is allowed, only the value of y is constant now,
    y = 2;// allowed
    printf("%d\n", y);
    //*point = 3; is not allowed

    int z;
    z = 9;
    int * const point1 = &z;
    //point1 = &z; cannot be assigned later on, now, the pointer is constant,
    //address is constant, unlike c++, opposite
    //point1 = &y;//not allowed
    printf("%d\n", *point1);
    *point1 = 8;//value can be changed now.
    printf("%d\n", *point1);


    return 0;
}
