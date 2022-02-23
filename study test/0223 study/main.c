#include <stdio.h>

int main(){
    float x;
    scanf("%f", &x);
 
 
    printf("%0.0f\n", x);
    int sum = 0;
    void y;
    y = *(int *)x;
    sum = x - y;
    printf("%d\n", sum);
    return 0;
    
}