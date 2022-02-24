#include <stdio.h>

union UData{
    int a;
    short b[2];
};

int unions(){
    union UData un;
    un.a = 0x12345678;
    printf("un.a = %x\n", un.a);
    printf("un.b[0]=%x\n", un.b[0]);
    printf("un.b[1]=%x\n", un.b[1]);

    un.b[0] = (short)0x9999;
    printf("대입 후의 un.a = %x\n", un.a);
}