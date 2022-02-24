#include <stdio.h>
#include <string.h>

struct Shuman
{
    char name[20];
    int age;
    double height;
};

int Shumantag()
{
    struct Shuman Ahn;
    strcpy(Ahn.name, "Jong Youn");
    Ahn.age = 33;
    Ahn.height = 181.2;

    printf("이름= %s, 나이= %d, 신장= %0.1f", Ahn.name, Ahn.age, Ahn.height);
    return 0;
}