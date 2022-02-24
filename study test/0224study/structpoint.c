#include <stdio.h>


struct STPoint{
    char name[20];
    int age;
    double height;
};

int sp(){
    struct STPoint Ahn = {"안종윤", 33, 144.2};
    struct STPoint *pi = &Ahn;

    printf("나이 = %d\n", (*pi).age);
}