#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "cursor.h"


#define gotoxy(x,y) {COORD Cur = {x, y};\ SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Cur);}

class Car
{
private:
	int gear;
	int angle;
	int rpm;

public:
	Car() { gear = 0; angle = 0; rpm = 0; }
	void ChangeGear(int agear) {
		if (agear >= 0 && agear <= 6) {
			gear = agear;
		}
	}
	void RotateWheel(int delta) {
		int tangle = angle + delta;
		if (tangle >= -45 && tangle <= 45) {
			angle = tangle;
		}
	}

	void accel() {
		rpm = min(rpm + 100, 3000);
	}

	void Break() {
		rpm = max(rpm - 500, 0);
	}

	void Run() {
		int speed;
		char Mes[128];
		gotoxy(10, 13);
		if (gear == 0) {
			puts("먼저 1~6키를 눌러 기어를 넣으시오            ");
			return;
		}
		if (gear == 6) {
			speed = rpm / 100;
		}
		else {
			speed = gear * rpm / 100;
		}
		sprintf(Mes, "%d의 속도로 %s쪽 %d도 방향으로 %s진중     ", abs(speed), (angle >= 0 ? "오른" : "왼"), abs(angle), (gear == 6 ? "후" : "전"));
		puts(Mes);
	}
};

int main()
{
	Car C;
	int ch;

	for (;;) {
		gotoxy(10, 10);
		printf("1~5:기어 변속, 6:후진기어, 0:중립기어");
		gotoxy(10, 11);
		printf("위 : 액셀, 아래 : 브레이크, 좌우: 핸들, Q:종료");
		if (kbhit()) {
			ch = getch();
			if (ch == 0xE0 || ch == 0) {
				ch = getch();
				switch (ch) {
				case 75:
					C.RotateWheel(-5);
					break;
				case 77:
					C.RotateWheel(5);
					break;
				case 72:
					C.accel();
					break;
				case 80:
					C.Break();
					break;

				}
			}
			else {
				if (ch >= '0' && ch <= '6') {
					C.ChangeGear(ch - '0');
				}
				else if (ch == 'q' || ch == 'Q') {
					exit(0);
				}
			}
		}
		C.Run();
		delay(10);
	}
}


/*class Time
{
private:
	int hour, min, sec;

public:
	Time(int h, int m, int s) {
		SetHour(h);
		SetMinute(m);
		sec = s;
	}
	int GetHour() { return hour; }
	void SetHour(int h) {
		if (h >= 0 && h < 24) {
			hour = h;
		}
	}
	int GetMinute() { return min; }
	void SetMinute(int m) {
		if (m >= 0 && m < 60) {
			min = m;
		}
	}
	int GetSecond() { return sec; }

	void OutTime() {
		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
	}
};
*/


/*int main()
{
	Time now(12, 34, 56);
	now.SetHour(40);
	now.OutTime();
	now.SetHour(9);
	now.OutTime();
}*/