#pragma once
#include <stdio.h>

class ExNagative
{
protected:
	int number;
public:
	ExNagative(int n):number(n){}
	virtual void PrintError() {
		printf("%d�� �����̹Ƿ� �߸��� ���Դϴ�.\n", number);
	}
};

class ExTooBig : public ExNagative
{
public:
	ExTooBig(int n) : ExNagative(n){}
	virtual void PrintError() {
		printf("%d�� �ʹ� Ů�ϴ�. 100���� �۾ƾ� �մϴ�.\n", number);

	}
};

class ExOdd : public ExTooBig
{
public:
	ExOdd(int n) : ExTooBig(n)	{}
	virtual void PrintError() {
		printf("%d�� Ȧ�� �Դϴ�. ¦������ �մϴ�.\n", number);
	}
};