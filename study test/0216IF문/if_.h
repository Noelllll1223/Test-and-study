#include <stdio.h>

int if_() {
	printf("3+3을 입력하시오 : ");
	scanf_s("%d", &input);
	if (input == 6)
		puts("정답입니다.");
	else if (input == 9)
		puts("덧셈을 하셔야 됩니다.");
	else
			puts("틀렸습니다.");
	puts("고생하셨습니다.");]
	return 0;
}