#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Hi
{
    char name[12];
    int age;
    double height;
};

void outHi(struct Hi some)
{
    printf("%s : %d세, 키 %.2f\n", some.name, some.age, some.height);
} 

int stinkel(){
    struct Hi ahn = {"안종윤", 33, 179.4};
    outHi(ahn);
}