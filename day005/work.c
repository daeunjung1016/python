#include <stdio.h>

void main() {
	// (if�� or switch�� �����Ӱ� ����Ͽ� ���� Ǯ��)
	// ����ڿ��� ������ �Է¹޾� Ȧ������ ¦������
	// �Ǻ��ϴ� ���α׷� �ۼ��ϱ�

	// �Ʒ��� if ���� (num % 2 == 0) �� �ƴ� (num % 2) printf("Ȧ���Դϴ�") ��� �ۼ��ص� ��

	int num;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);
	if (num % 2 == 0) printf("¦���Դϴ�");
	else printf("Ȧ���Դϴ�");

	printf("--------------------\n");
	// �ڽ� 1���� 4���� �󱸰��� ���� �� �ִ�
	// Ű���忡�� �󱸰��� ������ �Է¹ް�
	// �ʿ��� �ڽ��� ������ ����ϼ���
	// ex) ���� ���� �Է�: 15
	// ex) �ʿ��� �ڽ��� ����: 4��

	int ball, basket;
	printf("�󱸰��� ����: ");
	scanf("%d", &ball);
	if (ball % 4) printf("�ʿ��� �ڽ��� ������ %d���Դϴ�\n", ball / 4 + 1);
	else printf("�ʿ��� �ڽ��� ������ %d���Դϴ�\n", ball / 4);

	printf("--------------------\n");
	// Ű���忡�� ���� �ΰ��� �Է¹ް�
	// ���������(����)�� �Է¹޾Ƽ�
	// ���� ����� ����ϼ���
	// ex) ����1 �Է�: 10 / ����2 �Է�: 7
	// ex) ������ �Է�: + / ���: 10 + 7 = 17

	int num1, num2;
	printf("���� 1, 2 �Է�: ");
	scanf("%d %d", &num1, &num2);
	char op;
	printf("������ �Է�: ");
	scanf(" %c", &op);
	switch (op) {
	case '+':
		printf("���: %d + %d = %d\n", num1, num2, num1 + num2);
		break;
	case '-':
		printf("���: %d - %d = %d\n", num1, num2, num1 - num2);
		break;
	case '*':
		printf("���: %d * %d = %d\n", num1, num2, num1 * num2);
		break;
	case '/':
		printf("���: %d / %d = %d\n", num1, num2, num1 / num2);
		break;
	}

	printf("--------------------\n");
	// Ű���忡�� ��(month)�� �ϳ� �Է¹޴´�
	// �ش� ���� ���ϱ��� �ִ��� ���
	// ex) �� �Է�: 3
	// ex) ���: 3���� 31�ϱ��� �ֽ��ϴ�
	// 1 3 5 7 8 10 12

	int month;
	printf("�� �Է�: ");
	scanf("%d", &month);

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) printf("%d���� %d�ϱ��� �ֽ��ϴ�\n", month, 31);
	else if (month == 4 || month == 6 || month == 9 || month == 11) printf("%d���� %d�ϱ��� �ֽ��ϴ�\n", month, 30);
	else if (month == 2) printf("%d���� %d�ϱ��� �ֽ��ϴ�\n", month, 28);
	else printf("�߸� �Է��ϼ̽��ϴ�");

	switch (month) {
	case 1:	case 3:	case 5:	case 7:	case 8:	case 10: case 12:
		printf("%d���� %d�ϱ��� �ֽ��ϴ�\n", month, 31);
		break;

	case 4:	case 6:	case 9:	case 11:
		printf("%d���� %d�ϱ��� �ֽ��ϴ�\n", month, 30);
		break;
	case 2:
		printf("%d���� %d�ϱ��� �ֽ��ϴ�\n", month, 28);
		break;
	}
}