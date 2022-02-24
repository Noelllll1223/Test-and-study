#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct HumanS
{
    char *name;
    int age;
    double height;

};

int shallow(){
    struct HumanS kim = { NULL, 30, 160};
    kim.name = (char*)malloc(30);
    strcpy(kim.name, "김유신");

    struct HumanS lee = kim;
    strcpy(lee.name, "이순신");

    printf("%s : %d세, 키 %.2f\n", kim.name, kim.age, kim.height);
    printf("%s : %d세, 키 %.2f\n", lee.name, lee.age, lee.height);

    free(kim.name);
    free(lee.name);
    }