#include<stdio.h>
int CAR(i) {
	int car = 100;
	if (car < i) {
		puts("Pass");
	}
	else
		printf("CRASH %d입니다.", i);
}
int main() {
	int a, b, c;
	printf("각 구간 통과속도를 입력하시오 : ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	CAR(a);
	CAR(b);
	CAR(c);
	return (0);
}s

// 제한속도 100인데 속도에 따라서 통과할수 있는지 없는지 구현 개쓰레기 같은데 내 뇌를 다써버림 난 과연 코딩을 할 수 있을까????
	