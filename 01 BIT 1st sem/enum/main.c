#include <stdio.h>
#include <stdlib.h>
//enum
enum week {
    sunday,
    monday,
    tuesday,
    thursday,
    friday,
    saturday
};
int main()
{
    enum week day;
    printf("day :: %d\n", day);//prints 0
    day = sunday;
    printf("day = sunday :: %d\n", day);//prints 0;
    day.monday = 8;
    printf("day = Monday :: %d\n", day);

    return 0;
}
