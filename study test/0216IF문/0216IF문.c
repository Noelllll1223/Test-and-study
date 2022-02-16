#include<stdio.h>

int main()
{
	int attend, point; // 내가 스스로 생각해서 짜본거인데 허접하네

	printf("포인트는 attend/10으로 표기하고 만약 attend가 50점이상이면 추가 1점을 얻는다 너의 점수는 몇점이가 : ");
	scanf_s("%d", &attend);
	point = attend / 10 + (attend > 50);
	printf("point = %d\n", point);
	return 0;

//	int input;

//	printf("3+3을 입력하시오 : ");
//	scanf_s("%d", &input);
//	if (input == 6)
//		puts("정답입니다.");
//	else if (input == 9)
//		puts("덧셈을 하셔야 됩니다.");
//	else
//		puts("틀렸습니다.");
//	puts("고생하셨습니다.");]
//	return 0;

//	int input; // if else 문

//	printf("2+3을 입력하시오 : ");
//	scanf_s("%d", &input);
//	if (input == 5)
//		puts("정답입니다.");
//	else
//		puts("틀렸습니다.");
//	return 0;

//	int input;//답을 입력함

//	printf("2+3을 입력하시오 : ");
//	scanf_s("%d", &input);
//	if (input == 5) {
//		puts("정답입니다.");
//		puts("축하드립니다.");
//		return 0;
//	}
// if 문 기본 구조예제
//	int input;

//	printf("2+3을 입력하세요 : ");
//	scanf_s("%d", &input);
//	if (input == 5)
//		puts("정답입니다.");
//	return 0;
}