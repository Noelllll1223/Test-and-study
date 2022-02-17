#include <stdio.h>
#include <time.h>

int gethour()
{
	time_t t;
	time(&t);
	struct tm *pt = localtime_s(&t);
	return pt->tm_hour;
}

int main()
{
	printf("지금 시각은 %d시입니다.\n", gethour());
}