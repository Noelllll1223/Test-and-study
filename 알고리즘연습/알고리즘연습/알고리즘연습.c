#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;

    scanf_s("%d %d", &a, &b);
    if (a == 1 || b == 1) {
        printf("1");
    }
    else {
        printf("0");
    }

    return 0;
    
}