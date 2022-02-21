#include <stdio.h>
#define INCH 2.54 // 인치 -> CM로
#define DUBAE(a) (a+a) // 두배로
#define GOP(a) (a*a) // 제곱쓰
#include <cursor.h>
#define putsxy(x, y, s) {gotoxy(x, y); puts(s);}
#define JEGOP(a) ((a)*(a))

int main()
{
	clrscr();
	putsxy(2, 2, "left,top");
	putsxy(60, 2, "right, top");
	putsxy(60, 22, "right, bottom");
	putsxy(2, 22, "left, bottom");
	putsxy(30, 11, "center");

	printf("%d 두배\n", DUBAE(3));
	printf("%d 제곱\n", GOP(3));
	int s = 3;
	printf("%d\n", JEGOP(3));

	int size1 = 42;
	int size2 = 30;

	printf("%d인치 모니터의 크기 : %.0fcm\n", size1, size1 * INCH);
	printf("%d인치 모니터의 크기 : %.0fcm\n", size2, size2 * INCH);
}