#include <stdio.h>

void main() {
	// switch��
	// �پ��� ������ �˻��� �� �ְ� ����� ���� ������
	// �ϳ��� ������ ���Ŀ� ���� �پ��� ������ �˻��� �� ���
	// ���ǰ� case1, case2 ������ ���� case�� ���� ���̸� ����� �Ѵ�

	// switch(�񱳰�) {
	//   case ���ǰ�1:
	//		 ������ ���;
	//		 break;
	//   case ���ǰ�2:
	//		 ������ ���;
	//		 break;
	//   case ���ǰ�3:
	//		 ������ ���;
	//		 break;
	//   case ���ǰ�4:
	//		 ������ ���;
	//		 break;
	// }

	int option;
	printf("���� �Է�: ");
	scanf("%d", &option);
	switch (option) {
	case 1: 
		printf("���ӽ���\n");
		break;
	case 2:
		printf("���Ӽ���\n");
		break;
	case 3:
		printf("��������\n");
		break;
	}

	// switch���� �񱳰����� ����(int)�� ������(char) Ÿ�Ը�
	// �� �� �ִ� (�Ǽ� X, ���ڿ� X)
	switch ('a') {
	case 'a':
		printf("a�� �����ϼ̽��ϴ�\n");
		break;
	default:
		// �񱳰��� ��ġ�ϴ� ���ǰ��� �ϳ��� ���� �� ���(dafault)
		printf("�߸� �����ϼ̽��ϴ�\n");
		break;
	}

	printf("----------------------\n");

	// �Ʒ��� ���� 1, 3, 5�� Ȧ�� 2, 4, 6�� ¦����� ��°��� �����ϴ� ���� �ۼ���
	// �ϳ����� printf, break�� �ɸ� �ʹ� �����ϴ�

	//int num;
	//printf("������ �Է��ϼ���: ");
	//scanf("%d", &num);

	//switch (num) {
	//case 1:
	//	printf("Ȧ���Դϴ�\n");
	//	break;
	//case 3:
	//	printf("Ȧ���Դϴ�\n");
	//	break;
	//case 5:
	//	printf("Ȧ���Դϴ�\n");
	//	break;
	//case 2:
	//	printf("¦���Դϴ�\n");
	//	break;
	//case 4:
	//	printf("¦���Դϴ�\n");
	//	break;
	//case 6:
	//	printf("¦���Դϴ�\n");
	//	break;
	//}

	// �Ʒ��� ���� 1, 3, 5�� Ȧ�� 2, 4, 6�� ¦����� ��°��� �����ϴ� ���� �ۼ���
	// �ϳ����� printf, break�� �ɸ� �ʹ� �����ϴ�
	// �Ͽ� ������ ���� ������ �� �ִ�

	int num;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);

	switch (num) {
	case 1:
	case 3:
	case 5:
		printf("Ȧ���Դϴ�\n");
		break;
	case 2:
	case 4:
	case 6:
		printf("¦���Դϴ�\n");
		break;
	}

	// if vs switch
	// if��: ������ ���� ������ ���� �� ����

	// ex) 100�� ~ 90�� > A��� �����ϰ� ���� ��

	//int score;
	//if (score >= 90) printf('A');

	//switch (score) {
	//case 100:
	//case 99:
	//case 98:
	//case 97:

	// ���� ���� if�� �ξ� ȿ����

	// switch: Ư�� ���� ���� �� ����ϸ� ����
	// ex) �޴� ���� ��


	}
}