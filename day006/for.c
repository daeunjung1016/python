#include <stdio.h>

void main() {
	// for��
	// �־��� ������ �����ϴ� ���� ������ �ݺ��ϴ� ����
	// ����ڰ� �ݺ� Ƚ���� �����ϱ� ������ ������ ������ ����

	// for (�ʱ��; ���ǽ�; ������) {
	//	���ǽ��� ���� ���� �ݺ��� ����
	// }

	// �ʱ��: �ݺ��� ������ �˻��ϱ� ���� ����ϴ� ������ ���� �� �ʱ�ȭ
	// ���ǽ�: �ݺ��� ������ �˻��ϴ� ��, �� �Ǵ� �������� ���� ���� �˻�
	// ������: �ݺ��� ���� �˻� �� ���Ǵ� ������ ����

	// <�Ʒ� ���� �ؼ�>
	// �� i�� 0�̰� 3���� ������ "i�� 0�̴�" ���
	// �� �ٽ� for������ �ö�ͼ� �������� i++�� �޾� �ٽ� for�� ����
	// �� i�� 1�̰� 3���� ������ "i�� 1�̴�" ���
	// �� �ٽ� for������ �ö�ͼ� �������� i++�� �޾� �ٽ� for�� ����
	// �� ���ǽ��� ������ �� ������ �ݺ�

	for (int i = 0; i < 3; i++) {
		printf("i is %d now\n", i);
	}

	// ���� ����

	printf("--------------------------\n");
	// ��� ���
	// hello Clang
	// hello Clang
	// hello Clang
	// hello Clang
	// hello Clang
	// �� ������ �ݺ��� �����

	for (int i = 0; i < 5; i++) {
		printf("hello Clang\n");
	}

	printf("--------------------------\n");
	// ��� ���
	// 1 2 3 4 5 6 7 8 9 10
	// �� ������ �ݺ��� �����

	for (int i = 1; i <= 10; i++) {
		printf("%d ", i);
	}

	// ��� ���
	// 10 9 8 7 6 5 4 3 2 1
	// �� ������ �ݺ��� �����

	printf("\n--------------------------\n");
	for (int i = 10; i > 0; i--) {
		printf("%d ", i);
	}

	// 1~10������ ������ ���
	// 1~10������ ����: 55

	printf("\n--------------------------\n");
	int total = 0;
	for (int i = 1; i <= 10; i++) {
		total += i; // total = total + i;
	}
	printf("1 ~ 10������ ����: %d\n", total);

	// 1 ~ 20���� 4�� ����� ����ϼ���
	// ex) 4, 8, 12, 14, 20

	for (int i = 1; i <= 20; i++) {
		if (i % 4 == 0) {
			printf("%d\n", i);
		}
	}
	printf("\n--------------------------\n");

	// Ű���忡�� ������ �ϳ� �Է� �޾�
	// 1~ N������ ������ ���� ����ϼ���
	// ex) �Է�: 10, ���: 1~10������ ������ 55�Դϴ�

	int num;
	printf("���� �Է�: ");
	scanf("%d", &num);
	int sum = 0;
	for (int i = 1; i <= num; i++) {
		sum += i;
	}
	printf("1 ~ %d������ ������ %d�Դϴ�.\n", num, sum);

	printf("\n--------------------------\n");
	// Ű���忡�� ������ �ϳ� �Է� �޾�
	// �ش� �������� ����ϼ���
	// �� �Է�: 2
	// 2 x 1 = 2
	// 2 x 2 = 4
	// ...
	// 2 x 9 = 18
	
	int number;
	printf("���� �Է�: ");
	scanf("%d", &number);
	for (int i = 1; i <= 9; i++) {
		printf("%d x %d = %d\n", number, i, i * number);
	}

	// for������ ����� ���� ������
	for (;;) {

	}
}