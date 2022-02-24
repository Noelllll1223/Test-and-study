#include <stdio.h>
#include <string.h>

int struckstudy(){
    struct {
        char name[20];
        int age ;
        double height;
    } Ahn;

    strcpy (Ahn.name, "Jong Youn");
    Ahn.age = 33;
    Ahn.height = 180;

    printf("이름: %s\n 나이: %d\n 신장: %0.1f", Ahn.name, Ahn.age, Ahn.height);
    return 0;
}