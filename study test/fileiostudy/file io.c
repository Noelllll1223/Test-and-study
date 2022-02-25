#include <stdio.h>

int fileio() {
	FILE* f;
	char* str = "이 파일은 C 표준 함수로 생성된 텍스트 파일입니다.\n"
		"C드라이브의 Temp 디렉토리에 Test.txt라는 이름으로 생성됩니다.\n";

	f = fopen_s(&f, "c:\\Temp\\Test.txt", "wt+");

	if (f == NULL) {
		puts("파일 생성 실패");
		return 1;
	}
	else {
		fputs(str, f);
		fclose(f);
		puts("파일 생성 성공");
	}


	char buf[256];

	f = fopen_s(&f, "c:\\Temp\\Test.txt", "rt");
	if (f != NULL) {
		for (;;) {
			if (fgets(buf, 256, f) == NULL) {
				break;
			}
			printf("%s", buf);
		}
		fclose(f);
	}

}