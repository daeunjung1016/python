#include <stdio.h>

void main() {
	int num = 0;
	while (num < 3) {
		printf("num is %d now\n", num);
		num++;
	}
	printf("--------------------------\n");

	int n = 0;

	// ���� �ݺ� Ƚ���� ��Ȯ�� �� ���� ����� ����
	while (n != -1) {
		printf("���ڸ� �Է��ϼ��� (-1 �Է� �� ����): ");
		scanf("%d", &n);

		if (n == -1) printf("���α׷��� �����մϴ�\n");
		else printf("%d��(��) �Է��ϼ̳׿�\n", n);
	}

	// ���ѷ���
	// ������ �����ϴ� ���¸� �����ϸ� ������� �ʴ� ����
	int i = 0;

	while (1) {
		printf("���ѷ��� �ݺ���... ���ڸ� �Է��ϼ���: ");
		scanf("%d", &i);
		printf("%d��(��) �Է��ϼ̳׿�\n", i);
		}
}