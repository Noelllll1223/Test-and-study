#include<stdio.h>
#include<cursor.h>

int main() {
	int num;
	int input;

	randomize();
	for (;;) {
		num = random(100) + 1;
		puts("제 숫자를 맞춰보세요.");

		do {
			printf("숫자를 입력하세요. : (종료는 0, 재시작은 00키를 눌러주세요.)");
			scanf_s("%d", &input);
			if (input == num) {
				puts("정답입니다.");
			}
			else if (input <= num) {
				puts("정답보다 작습니다.");
			}
			else if (input >= num) {
				puts("정답보다 큽니다.");
			}
			else if (input == 999) {
				exit(0);
			}

		} while (input != num);
	} 
}