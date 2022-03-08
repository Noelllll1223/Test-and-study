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
		calc(1, "계산");
	}
	catch (const char* message) {
		puts(message);
	}
	puts("프로그램이 종료됩니다.");

	return 0;
}
*/

int Excep() {
	try {
		report();
		puts("작업을 완료했습니다.");

	}
	catch (Exception& e) {
		printf("에러 코드 = %d => ", e.GetErrorCode());
		e.ReportError();
	}
	return 0;
}

int inherit() {
	int n;
	for (;;) {
		try {
			printf("숫자를 입력하세요(끝낼 때 0) : ");
			scanf_s("%d", &n);
			if (n == 0) break;
			if (n < 0) throw ExNagative(n);
			if (n > 100) throw ExTooBig(n);
			if (n % 2 != 0) throw ExOdd(n);

			printf("%d 숫자는 규칙에 맞는 숫자입니다.\n", n);
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
		printf("에러코드 = %d => ", e.GetErrorCode());
		e.ReportError();
	}
}
*/