#include <stdio.h>

void main() {
	// 입력 함수 = scanf()함수
	// 데이터의 입력에 사용되는 함수
	// 데이터를 입력하기 위해서는 입력된 데이터를 담기 위한
	// 변수가 선언되어 있어야 한다.
	// ★ scanf에는 절대 역슬래시(\)를 넣지 않음! 대신에 앤퍼센트(&)를 넣음

	int num;	
	printf("정수 입력: ");
	scanf("%d", &num); // & = 변수의 주소 값을 달라! pointer

	printf("num: %d\n", num);
	// 입력 데이터의 개수를 여러 개 지정할 수 있음
	printf("세 개의 정수 입력: ");
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("입력된 정수: %d, %d, %d\n", num1, num2, num3);

	printf("실수, 정수, 실수 차례대로 입력하기: ");
	float fnum1, fnum2;
	scanf("%f %d %f", &fnum1, &num1, &fnum2);
	printf("입력된 값들: %.2f,%d, %.2f\n", fnum1, num1, fnum2);

	printf("------------------------\n");

	char ch;
	printf("문자 입력: ");
	scanf(" %c", &ch);
	printf("입력된 문자: %c\n", ch);
	// ▲ 이건 문자 딱 하나밖에 노출 안 됨...

	char name[10];
	printf("이름 입력: ");
	scanf("%s", name);
	// 문자 여러개 나열 시 유일하게 앤퍼센트 안 씀
	printf("입력된 이름: %s\n", name);


	// scanf 할때 여러 개를 입력할 시.. "%c" 가 아니라 " %c" 이런 식으로
	// 공백을 앞에다 넣는다
}