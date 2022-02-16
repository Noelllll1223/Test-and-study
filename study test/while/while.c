#include<stdio.h>
#include<cursor.h>
#include<conio.h>

int main()
{
	int x = 40, y = 12;
	int dx = 1, dy = 1;

	clrscr();
	while (_kbhit() == FALSE) {
		gotoxy(x, y); _putch(' ');
		x += dx;
		y += dy;
		gotoxy(x, y); _putch('#');
		if (x == 79 || x == 0) {
			dx = -dx;
		}
		if (y == 24 || y == 0) {
			dy = -dy;
		}
		delay(30);
	}
}

/*int main() //숫자맞추기
{
	int num;
	int input;

	randomize();
	for (;;) {
		num = random(100) + 1;
		puts("제가 만든 숫자를 맞춰 보세요.");
		do {
			printf("숫자를 입력하세요(끝날 때는 999) : ");
			scanf_s("%d", &input);
			if (input == 999) {
				exit(0);
			}
			if (input == num) {
				puts("맞췄습니다.\n");
			}
			else if (input <= num) {
				puts("입력한 숫자보다 큽니다.");
			}
			else
				puts("입력한 숫자보다 작습니다.");
		} while (input != num);
	}
}
*/
/*int main()
{
	int num;
	int sum = 0;

	do {
		printf("정수를 입력하시오(끝낼 때는 0) : ");
		scanf_s("%d", &num);
		sum += num;
	} while (num != 0);
	printf("총합은 %d입니다.", sum);
}
*/
/*int main()
{
	int sum = 0;

	int i = 1;
	while (i <= 100) {
		sum += i;
		i++;
	}
	printf("1~100까지의 합 = %d\n", sum);
}*/


/*int main()
{
	int battery = 34;
	while(battery < 100)
	{
		battery += 1;
		printf(".");
		delay(200);
	}
	printf("\n배터리 %d%%충전 완료\n", battery);
}*/