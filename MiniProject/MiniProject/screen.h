#pragma once
#include <stdio.h>
#include <cursor.h>
#include <string.h>
#include <conio.h>

class starting
{
private:
	int x, y;
public:
	starting(int ax, int ay) { x = ax; y = ay; }
	void show{
		gotoxy(x, y); puts("2Á¶ MiniProject");
	}
};

int start() {
	starting s(10, 10);
	s.show();
}