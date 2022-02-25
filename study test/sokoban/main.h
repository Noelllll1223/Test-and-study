#include <stdio.h>
#include <cursor.h>
#include <conio.h>
#pragma warning(disable : 4996)

#define ROW_MAX = 18;
#define COL_MAX = 21;

int x, y;

enum { ESC = 27, LEFT = 75, RIGHT = 77, UP = 72, DOWN = 80 };
#define putchxy(x, y ,c) {gotoxy(x,y); putch(c);};
#define putsxy(x, y, s) {gotoxy(x, y);puts(s);};

char baseStage[18][21] = {

		"####################",
		"####################",
		"####################",
		"#####   ############",
		"#####O  ############",
		"#####  O############",
		"###  O O ###########",
		"### # ## ###########",
		"#   # ## #####  ..##",
		"# O  O   @      ..##",
		"##### ### # ##  ..##",
		"#####     ##########",
		"####################",
		"####################",
		"####################",
		"####################",
		"####################",
		"####################",

};


char gameStage[18][21];
int myX;
int myY;
int ky, kx;
BOOL bEnd;
int ch;
int dx, dy;


void preparestage() {
	showcursor(FALSE);
	memcpy(gameStage, baseStage, sizeof(gameStage));
}


void findMypositin() {
	for (myY = 0; myY < 18; myY++) {
		for (myX = 0; myX < 20; myX++) {
			if (gameStage[myY][myX] == '@') {
				ky = myY;
				kx = myX;
				
				gameStage[myY][myX] = ' ';
			
			}
		}
	}
}

void gameLoop() {

	for (;;) {

		for (int y = 0; y < 18; y++) {
			putsxy(0, y, gameStage[y]);
		}

		putchxy(ky, kx, '@');

		ch = getch();
		if (ch == 0xE0 || ch == 0)
		{
			ch = getch();
			dx = dy = 0;

			switch (ch) {
			case LEFT:
				dx = -1;
				break;
			case RIGHT:
				dx = 1;
				break;
			case UP:
				dy = -1;
				break;
			case DOWN:
				dy = 1;
				break;
			}

			
			// 벽이 아니어야 한다
			if (gameStage[ky + dy][kx + dx] != '#') {
				if (gameStage[ky + dy][kx + dx] == 'O') { //짐을 미는 경우
					if (gameStage[ky + dy * 2][kx + dx * 2] == ' ' || gameStage[ky + dy * 2][kx + dx * 2] == '.') {
						if (baseStage[ky + dy][kx + dx] == '.') {
							gameStage[ky + dy][ky + dx] = '.';
						}
						else {
							gameStage[kx + dy][kx + dx] = ' ';
						}
						gameStage[ky + dy * 2][kx + dx * 2] = 'O';
					}
					else {
						dx = dy = 0;
					}
					kx += dx; // 
					ky += dy;
				}
				
			}
		}
		else {
			if (ch == ESC) {
			  break;
			}
		}
	}
}

	void gameOver() {
	bEnd = TRUE;
	for (myY = 0; myY < 18; myY++) {
		for (myX = 0; myX < 20; myX++) {
			if (gameStage[myY][myX] == '.') {
				bEnd = FALSE;
			}
		}
	}
}


	void clearScreen()
{
		clrscr();
		putsxy(45, 2, "소코반");
		putsxy(45, 4, "ESC : 종료")

}