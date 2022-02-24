#include <stdio.h>
#include <string.h>

struct SThuman
{
    char name[20];
    int age;
    double height;
};

int SThumanRest(){
    struct SThuman alman[] = {
        {"안종윤", 33, 181},
        {"홍길동", 33, 172},
        {"허균", 33, 178}
    };
    for (int i=0; i<3 ; i++){
        printf("이름= %s, 나이= %d, 신장= %0.1f\n", alman[i].name, alman[i].age, alman[i].height );

    }
    return 0;
    
}