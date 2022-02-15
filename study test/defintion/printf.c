#include<stdio.h>

int main()
{
	int value = 123;

	printf("###%d###\n", value);
	printf("###%5d###\n", value);
	printf("###%05d###\n", value);
	printf("###%-5d###\n", value);
	return 0;

	///int value = 62;
	//char ch = 'k';

	//printf("정수는 %d이고 문자는 %c입니다.\n", value, ch);
}