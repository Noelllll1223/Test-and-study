#include <stdio.h>

int fileio() {
	FILE* f;
	char* str = "�� ������ C ǥ�� �Լ��� ������ �ؽ�Ʈ �����Դϴ�.\n"
		"C����̺��� Temp ���丮�� Test.txt��� �̸����� �����˴ϴ�.\n";

	f = fopen_s(&f, "c:\\Temp\\Test.txt", "wt+");

	if (f == NULL) {
		puts("���� ���� ����");
		return 1;
	}
	else {
		fputs(str, f);
		fclose(f);
		puts("���� ���� ����");
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