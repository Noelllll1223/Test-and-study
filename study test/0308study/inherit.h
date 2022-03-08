#pragma once
#include <stdio.h>

class ExNagative
{
protected:
	int number;
public:
	ExNagative(int n):number(n){}
	virtual void PrintError() {
		printf("%d는 음수이므로 잘못된 값입니다.\n", number);
	}
};

class ExTooBig : public ExNagative
{
public:
	ExTooBig(int n) : ExNagative(n){}
	virtual void PrintError() {
		printf("%d는 너무 큽니다. 100보다 작아야 합니다.\n", number);

	}
};

class ExOdd : public ExTooBig
{
public:
	ExOdd(int n) : ExTooBig(n)	{}
	virtual void PrintError() {
		printf("%d는 홀수 입니다. 짝수여야 합니다.\n", number);
	}
};