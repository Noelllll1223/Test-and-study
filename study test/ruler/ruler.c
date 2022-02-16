#include<stdio.h>
#include<cursor.h>

int main() {
	clrscr();
	for (int i = 1; i <= 100; i++) {
		gotoxy(i, 10);
		if (i % 7 == 0) {
			puts("O");
		}
		else
			puts(".");
	}
	delay(300);
}

/*int main() {
	for (int i = 1; i <= 100; i++) {
		gotoxy(i, 10);
		if (i % 2 == 0) {
			puts("__@");
		}
		else {
			puts("^^#");
		}
	}
	delay(200);
}*/

/*int main()
{
	for (int i = 0; i <=100 ; i++) {
		if (i %7 == 0) {
			_putch('O');
		}
		else {
			_putch('_');
		}
	}
}
*/
/*int main()
{
	for (int i = 0; i <= 100; i++) {
		if (i % 10 == 0) {
			_putch('_');
		}
		else {
			_putch('|');
		}
	}
}
*/