nt GetSum(int from, int to) {
	int sum = 0;
	for (int i = from; i <= to; i++) {
		sum += i;

	}
	if (from > to)
		puts("오류입니다.");
	else
		printf("%d~%d의 합은 %d입니다.\n", from, to, sum);
}