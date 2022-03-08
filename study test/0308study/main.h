#pragma once
#include "try.h"
#include "Throw.h"
#include "Exception.h"
#include "inherit.h"
#include "capsul.h"
#include "mapstudy.h"
//#include "StackU.h"

/*int Throw() {
	try {
		divide(10, 0);
	}
	catch (const char* message) {
		puts(message);
	}
	divide(10, 5);

	return 0;
}
*/
/*int StackU()
{
	try {
		calc(1, "���");
	}
	catch (const char* message) {
		puts(message);
	}
	puts("���α׷��� ����˴ϴ�.");

	return 0;
}
*/

int Excep() {
	try {
		report();
		puts("�۾��� �Ϸ��߽��ϴ�.");

	}
	catch (Exception& e) {
		printf("���� �ڵ� = %d => ", e.GetErrorCode());
		e.ReportError();
	}
	return 0;
}

int inherit() {
	int n;
	for (;;) {
		try {
			printf("���ڸ� �Է��ϼ���(���� �� 0) : ");
			scanf_s("%d", &n);
			if (n == 0) break;
			if (n < 0) throw ExNagative(n);
			if (n > 100) throw ExTooBig(n);
			if (n % 2 != 0) throw ExOdd(n);

			printf("%d ���ڴ� ��Ģ�� �´� �����Դϴ�.\n", n);
		}
		catch(ExNagative & e) {
			e.PrintError();
		}
	}
}

/*
int tryyy() {
	MyClass m;
	m.calc();
	try {
		m.calc2();
	}
	catch (MyClass::Exception& e) {
		printf("�����ڵ� = %d => ", e.GetErrorCode());
		e.ReportError();
	}
}
*/