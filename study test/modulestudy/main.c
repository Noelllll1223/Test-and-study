#include<stdio.h>
#include "test.h"
#include<conio.h>

int main()
{
	int a;
	int b;

	
		printf("���ϴ� ������ ���ڸ� �ջ��� �帳�ϴ�.");
		printf("���� ���ڸ� �Է��ϼ��� : ");
		scanf_s("%d", &a);

		printf("������ ���ڸ� �Է��ϼ��� : ");
		scanf_s("%d", &b);

		printf("%d�Դϴ�.\n", GetSum(a, b));
	
}