#include <stdio.h>
#include <stdlib.h>
//enum
enum week {
    sunday,//value 0
    monday,//value 1
    tuesday,// value 2
    thursday = 10,// initializing value 10
    friday,// value 11
    saturday = 20 //value 20
};
int main()
{
    enum week day;
    printf("day :: %d\n", day);//prints 0
    day = sunday;
    printf("day = sunday :: %d\n", day);//prints 0;
    //monday = 8; cannot do
    printf("day = Monday :: %d\n", day);
    day = thursday;
    printf("day = Monday :: %d\n", day);//prints 10
    day = friday;
    printf("day = Monday :: %d\n", day); //prints 11
    day = saturday;
    printf("day = Monday :: %d\n", day);//prints 20

    return 0;
}
