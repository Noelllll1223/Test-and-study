#pragma once

#include <stdio.h>

class Base
{
private:
	char* B_buf;
public:
	Base() { B_buf = new char[10]; puts("Base ????"); }
	virtual ~Base() { delete[] B_buf; puts("Base ?ı?"); }
};
class Derived : public Base
{
private:
	int* D_buf;
public:
	Derived() { D_buf = new int[32]; puts("Derived ????"); }
	virtual ~Derived() { delete[] D_buf; puts("Derived ?ı?"); }
};
