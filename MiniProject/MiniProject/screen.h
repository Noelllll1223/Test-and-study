#pragma once
#include <stdio.h>
#include <cursor.h>
#include <string.h>
#include <math.h>
#include <conio.h>

class starting
{
private:
	int x, y;
public:
	starting(int ax, int ay) { x = ax; y = ay; }
	void Name() {
		gotoxy(x, y); puts("2�� MiniProject 000000����");
	}
	void End() {
		gotoxy(x, y); printf("esc : ��������");
	}
	void mainguide() {
		gotoxy(x, y); puts("S: ���� ��ŸƮ");
		gotoxy(x, y+1); puts("G: ���� ���̵�");
		gotoxy(x, y + 2); puts("T: ���� ���ھ�");

	}

};

