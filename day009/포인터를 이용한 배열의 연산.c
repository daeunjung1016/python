#include <stdio.h>

void main() {
	// �迭�� �̸��� �������̹Ƿ� * �����ڸ� �����
	// �޸� ������ ������ �� �ִ�

	short sarr[3] = { 1, 2, 3 };
	int iarr[3] = { 10, 20, 30 };

	// �ε��� ��ȣ�� ���� ����
	printf("%d %d %d\n", sarr[0], sarr[1], sarr[2]);
	printf("%d %d %d\n", iarr[0], iarr[1], iarr[2]);

	// ������ ������ ���� ����
	// ������ ������ ���� 1�� �������� ���� �ּҿ� ������ �� �ִ�
	printf("%d %d %d\n", *sarr, *(sarr + 1), *(sarr + 2));
	printf("%d %d %d\n", *iarr, *(iarr + 1), *(iarr + 2));

	// �ּ�
	// �������� Ÿ�Ը��� �ٸ��ٴ� ���� �� �� �ִ�
	// �Ʒ� ���� ���� ��ȣ�� ��� �ȴ�
	printf("%d %d %d\n", sarr, (sarr + 1), (sarr + 2));
	printf("%d %d %d\n", iarr, (iarr + 1), (iarr + 2));


}