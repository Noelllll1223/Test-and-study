#pragma once
#include <stdio.h>

void divide(int a, int d)
{
	if (d == 0) throw "0���δ� ���� �� �����ϴ�.";
	printf("������ ��� = %d�Դϴ�.\n", a / d);
}