#pragma once
#include <stdio.h>

class Shape
{
public:
	virtual void draw() = 0;
};

class Line : public Shape
{
public:
	void draw() { puts("���� �߽��ϴ�."); }
};

class Circle : public Shape
{
public: 
	void draw() { puts("�����Դϴ�."); }
};

class Rect : public Shape
{
public:
	void draw() { puts("�簢���Դϴ�."); }
};