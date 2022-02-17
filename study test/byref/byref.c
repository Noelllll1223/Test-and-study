#include <stdio.h>
void plusref(int* pi) {
	*pi = *pi + 1;

}

int main()
{
	int a = 5;
	plusref(&a);
	printf("a=%d\n", a);

}