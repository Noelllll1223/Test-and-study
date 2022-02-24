#include <stdio.h>

struct Shuman
{
    char name[20];
    int age;
    double height;
};

struct SBook
{
    char title[50];
    int page;
    struct Shuman writer;
};

int sbook()
{
    struct SBook iop = {
        "윈도우즈 API 정복", 2100,{"안종윤", 20, 170}
    };

    printf("저자 = %s\n", iop.writer.name);

    return 0;
}