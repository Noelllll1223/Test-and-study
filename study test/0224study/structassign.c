#include <stdio.h>

struct Human
{
    char name[12];
    int age;
    double height;
};

int assign()
{
    struct Human kim = {"김상형", 29, 181.5};
    struct Human lee;

    lee=kim;
    printf("%s : %d세, 키 %.2f\n", lee.name, lee.age, lee.height);
    return 0;
}