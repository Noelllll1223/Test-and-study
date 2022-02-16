#include<stdio.h>
#include<conio.h>
#include"cursor.h"

int main() {
	
	int x = 25, y = 25;
	int ch;

	clrscr();
	
	for (;;) {
		gotoxy(x, y);
		_putch('@');
		ch = _getch();
		if (ch == 0xE0 || ch == 0) {
			ch = _getch();
			switch (ch) {
			case '75':
				x--;
				break;
			case '77':
				x++;
				break;
			case '72':
				y--;
				break;
			case '80':
				y++;
				break;
			}
		}
		else {
			ch = _getch(' ');
			clrscr();
			switch (ch) {
			case'q':
			case'Q':
				exit(0);
			}
		}
	}
}