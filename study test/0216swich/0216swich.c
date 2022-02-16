#include<stdio.h>
int main()
{
	int score;
	printf("성적을 입력하시오 : ");
	scanf_s("%d", &score);

	switch (score / 10) {
	case 10:
	case 9:
		puts("A 학점");
		break;
	case 8:
		puts("B 학점");
		break;
	case 7:
		puts("C 학점");
		break;
	case 6:
		puts("D 학점");
		break;
	case 5:
		puts("E 학점");
		break;
	default:
		puts("F 학점");
		break;
	}
//	printf("토정 비결을 보시겠습니까?(Y/N)");
//	int ch = getch();
//	puts("");
//
//	switch (ch) {
//	case'y':
//	case'Y':
//		bputs("토정 비결을 믿느니 나를 믿어라");
//		break;
//	case'n':
//	case'N':
//		puts("잘 생각했네");
		
//	}
// 
//	int num;

//	printf("정수를 입력하세요 : ");
//	scanf_s("%d", &num);

//	switch (num) {
//	case 1:
//		puts("one");
//		break;
//	case 2:
//		puts("two");
//		break;
//	case 3:
//		puts("three");
//		break;
//	default:
//		puts("others");
//		break;
//	}
}