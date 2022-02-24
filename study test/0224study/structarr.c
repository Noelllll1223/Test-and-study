#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct STarr{
    char name[20];
    int age;
    double height;

};

int sarrye()
{
    struct STarr *arry[5];

    for (int i = 0; i< 5; i++)
    {
        arry[i]=(struct STarr *)malloc(sizeof(struct STarr));
    }
    arry[3]->age = 45;
    printf ("%d\n", arry[3]->age);

    for (int i = 0; i<5; i++)
    {
        free(arry[i]);
    }
}