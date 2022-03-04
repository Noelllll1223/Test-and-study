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
	void draw() { puts("선을 긋습니다."); }
};

class Circle : public Shape
{
public: 
	void draw() { puts("원형입니다."); }
};

class Rect : public Shape
{
public:
	void draw() { puts("사각형입니다."); }
};