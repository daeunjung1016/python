#include <stdio.h>

void main() {
	// (if문 or switch문 자유롭게 사용하여 문제 풀기)
	// 사용자에게 정수를 입력받아 홀수인지 짝수인지
	// 판별하는 프로그램 작성하기

	// 아래에 if 안의 (num % 2 == 0) 이 아닌 (num % 2) printf("홀수입니다") 라고 작성해도 됨

	int num;
	printf("정수를 입력하세요: ");
	scanf("%d", &num);
	if (num % 2 == 0) printf("짝수입니다");
	else printf("홀수입니다");

	printf("--------------------\n");
	// 박스 1개에 4개의 농구공을 담을 수 있다
	// 키보드에서 농구공의 개수를 입력받고
	// 필요한 박스의 개수를 출력하세요
	// ex) 공의 개수 입력: 15
	// ex) 필요한 박스의 개수: 4개

	int ball, basket;
	printf("농구공의 개수: ");
	scanf("%d", &ball);
	if (ball % 4) printf("필요한 박스의 개수는 %d개입니다\n", ball / 4 + 1);
	else printf("필요한 박스의 개수는 %d개입니다\n", ball / 4);

	printf("--------------------\n");
	// 키보드에서 정수 두개를 입력받고
	// 산술연산자(문자)로 입력받아서
	// 연산 결과를 출력하세요
	// ex) 정수1 입력: 10 / 정수2 입력: 7
	// ex) 연산자 입력: + / 결과: 10 + 7 = 17

	int num1, num2;
	printf("정수 1, 2 입력: ");
	scanf("%d %d", &num1, &num2);
	char op;
	printf("연산자 입력: ");
	scanf(" %c", &op);
	switch (op) {
	case '+':
		printf("결과: %d + %d = %d\n", num1, num2, num1 + num2);
		break;
	case '-':
		printf("결과: %d - %d = %d\n", num1, num2, num1 - num2);
		break;
	case '*':
		printf("결과: %d * %d = %d\n", num1, num2, num1 * num2);
		break;
	case '/':
		printf("결과: %d / %d = %d\n", num1, num2, num1 / num2);
		break;
	}

	printf("--------------------\n");
	// 키보드에서 달(month)을 하나 입력받는다
	// 해당 달이 몇일까지 있는지 출력
	// ex) 달 입력: 3
	// ex) 출력: 3월은 31일까지 있습니다
	// 1 3 5 7 8 10 12

	int month;
	printf("달 입력: ");
	scanf("%d", &month);

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) printf("%d월은 %d일까지 있습니다\n", month, 31);
	else if (month == 4 || month == 6 || month == 9 || month == 11) printf("%d월은 %d일까지 있습니다\n", month, 30);
	else if (month == 2) printf("%d월은 %d일까지 있습니다\n", month, 28);
	else printf("잘못 입력하셨습니다");

	switch (month) {
	case 1:	case 3:	case 5:	case 7:	case 8:	case 10: case 12:
		printf("%d월은 %d일까지 있습니다\n", month, 31);
		break;

	case 4:	case 6:	case 9:	case 11:
		printf("%d월은 %d일까지 있습니다\n", month, 30);
		break;
	case 2:
		printf("%d월은 %d일까지 있습니다\n", month, 28);
		break;
	}
}