nt GetSum(int from, int to) {
	int sum = 0;
	for (int i = from; i <= to; i++) {
		sum += i;

	}
	if (from > to)
		puts("�����Դϴ�.");
	else
		printf("%d~%d�� ���� %d�Դϴ�.\n", from, to, sum);
}