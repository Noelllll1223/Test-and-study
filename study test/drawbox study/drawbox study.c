#include <stdio.h>
#include <cursor.h>

void putchs(int ch, int n) {
	for (int i = 0; i < n; i++) {
		putch(ch);
	}
	puts("");
}

void outboxmessage(char* str)
{
	int len = strlen(str);
	putchs('-', len + 4);
	printf("| %s |\n", str);
	putchs('-', len + 4);
}
int main() {
	outboxmessage("하하 안녕하십니까?");
}
/*
void OutBoxMessage(char* str)
{
	int len = strlen(str);
	for (int i = 0; i < len + 4; i++) {
		putch('-');
	}
	puts("");
	printf("| %s |\n", str);
	
	for (int i = 0; i < len + 4; i++) {
		putch('-');
	}
	puts("");
}
int main() {
	OutBoxMessage("박스열에 문자열을 출력 한다.");
}
*/
/*int main() {
	for (int i = 0; i < 15; i++) putch('-');
	puts("");
	
	printf("|안녕하세요.|\n");
	for (int i = 0; i < 15; i++) putch('-');
	puts("");

	for (int i = 0; i < 25; i++) putch('-');
	puts("");
	
	printf("|즐거운 하루 보내세요.|\n");
	for (int i = 0; i < 25; i++) putch('-');
	puts("");
	
}*/