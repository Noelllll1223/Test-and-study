#pragma once
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <cursor.h>

class point
{
protected:
	int x, y;
	char ch;

public:
	point(int ax, int ay, char ach) { x = ax; y = ay; ch = ach; }
	virtual void show() {
		gotoxy(x, y); _putch(ch);
	}
	virtual void hide() {
		gotoxy(x, y); _putch(' ');
	}
	void move(int nx, int ny) {
		hide();
		x = nx;
		y = ny;
		show();
	}
};

class Circle : public point
{
protected:
	int radius;

public:
	Circle(int ax, int ay, char ach, int arad) : point(ax, ay, ach) { radius = arad; }

	void show() {
		for (double a = 0; a < 360; a += 10) {
			gotoxy(int(x + sin(a * 3.14 / 180 * radius)), int(y - (cos(a * 3.14 / 180) * radius / 2)));
			_putch(' ');
		}
	}
	void hide() {
		for (double a = 0; a < 360; a += 10) {
			gotoxy(int(x + sin(a * 3.14 / 180) * radius), int(y - cos(a * 3.14 / 180) * radius / 2));
			_putch(' ');
		}
	}
};