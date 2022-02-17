#include<stdio.h>
#include "test.h"
#include<conio.h>

int main()
{
	int a;
	int b;

	
		printf("원하는 범위의 숫자를 합산해 드립니다.");
		printf("시작 숫자를 입력하세요 : ");
		scanf_s("%d", &a);

		printf("마지막 숫자를 입력하세요 : ");
		scanf_s("%d", &b);

		printf("%d입니다.\n", GetSum(a, b));
	
}