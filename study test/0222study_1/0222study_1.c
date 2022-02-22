#include <stdio.h>

#define RANGE 50

int main()
{
	int prime[RANGE + 1];

	// 일단 전부 소수로 가정한다.
	for (int i = 0; i <= RANGE; i++) prime[i] = 1;

	// 2부터 배수를 찾아 지운다.
	for (int i = 2; i <= RANGE; i++) {
		if (prime[i]) {
			for (int j = i * 2; j <= RANGE; j += i) {
				prime[j] = 0;
			}
		}
	}

	// 남은 소수 출력
	printf("%d까지의 소수 목록\n", RANGE);
	for (int i = 2; i <= RANGE; i++) {
		if (prime[i]) {
			printf("%d  ", i);
		}
	}
};