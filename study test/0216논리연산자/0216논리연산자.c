#include <stdio.h>

int main()
{
	printf("숫자를 입력하세요 : ");
	int num;
	scanf_s("%d", &num);

	printf("%d는 %s수입니다.\n", num, num % 2 == 0 ? "짝" : "홀");
//	int kim = 182, lee = 153, tall;

//	tall = kim > lee ? kim : lee;
//	printf("큰 사람 = %d\n", tall);
//	int year;

//	printf("현재 년도를 입력하시오. ");
//	scanf_s("%d", &year);

//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		puts("윤년입니다.");
//	else
//		puts("윤년이 아닙니다.");

//	int blood;

//	printf("현재 혈당은 얼마입니까?");
//	scanf_s("%d", &blood);

//	if (70 < blood && blood < 120)
//		puts("정상 혈당입니다.");
//	else
//		puts("혈당 관리가 필요합니다.");

}