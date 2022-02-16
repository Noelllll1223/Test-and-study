

#include <stdio.h>

int main()
{
	for (int a = 1; a <= 10; a++) {
		for (int b = 1; b <= 10-a; b++) {
			printf("0");
		}
		for (int b = 1; b <= a * 2 - 1; b++) {
			printf("*");
		}
		puts("");
	}
}

//#include<stdio.h>
//#include"cursor.h"
/*int main()
{
	int num;

	for (;;) {
		printf("성적을 조회할 학생 번호를 입력하세요(끝낼 때는 0) :");
		scanf_s("%d", &num);
		if (num == 0) break;
		printf("%d번 학생의 성적은 xx입니다.\n", num);
	}
	puts("수고하셨습니다");

	/*clrscr();

	for (int i = 1; i < 80; i++) {
		gotoxy(i, 10); _putch('#');
		gotoxy(i - 1, 10); putch(' ');
		delay(100);
	}
	*/
//	long long i;
//	long long sum = 0;
	

//	for (i = 1; i <= 100; i++ ) { //생각 ,는 사용하지 말것 서로 다른것으로 표시할떄 임
//		sum += i;

//	}
//	printf("%d\n", sum);
	
	
//}

// int main() {
// long double n = 40000000000;
// cout << n*(n+1) / 2<<end1;
// return 0;*/