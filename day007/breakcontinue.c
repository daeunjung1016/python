#include <stdio.h>

void main() {
	// break
	// ���� ���� ���� �ݺ����� ���� �����ϴ� ����
	// �ݺ��� �ȿ����� ����� �� �ִ�

	// while���� break
	int num = 1;
	while (1) {
		printf("%d ", num++);

		// �� ���� ������ ����
		if (num > 3) {
			break;
		}
	}
	printf("----------------------------\n");
	// continue
	// ���Ŀ� �ڵ带 �����ϰ� �ݺ����� ������ �Ǵ�
	// ���ǽ����� ���ư���� ����

	// continue�� ������ �Ʒ��� ����ϴ� �� �ƴ϶� ���������� �ٽ� ���ư�!

	for (int i = 1; i <= 10; i++) {
		if (i % 2 == 0) {
			continue;
		}
		printf("%d ", i);
	}
}