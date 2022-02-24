#include<stdio.h>
#include<malloc.h>
#include<string.h>

struct JD{
    char *name;
    int age;
    double height;
};

int deep(){
    struct JD kim ={NULL, 30, 170};
    kim.name = (char*)malloc(30);
    strcpy(kim.name, "안종윤");

    struct JD lee = kim;
    lee.name =(char*)malloc(30);
    strcpy(lee.name, "길연희");

    printf("%s : %d세, 키 %.2f\n", kim.name, kim.age, kim.height);
    printf("%s : %d세, 키 %.2f\n", lee.name, lee.age, lee.height);

    free(kim.name);
    free(lee.name);
 
    }