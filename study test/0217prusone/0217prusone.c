#include<stdio.h>

int plusone(int i)
{
	i += 1;
	return i;
}

void plusref(int* pi)
{
	*pi += 1;
}

int main()
{
	int a = 5, b;

	b = plusone(a);
	printf("a = %d, 리턴=%d\n", a, b);
	plusref(&a);
	printf("a=%d\n", a);
}